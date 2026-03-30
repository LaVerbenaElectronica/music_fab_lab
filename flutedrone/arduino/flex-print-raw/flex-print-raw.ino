/*
   ____  _____ _        _
   | __ )| ____| |      / \
   |  _ \|  _| | |     / _ \
   | |_) | |___| |___ / ___ \
   |____/|_____|_____/_/   \_\
http://bela.io

\example flex-print-raw

Trill Flex Print Slider
=======================

This is an example of how to communicate with the Trill Flex
sensor using the Trill Arduino library.

The sensor is set to Differential mode and readings from each of the
capacitive connections on the sensor are printed to the serial port.

You can find our Processing library for visualising here:
https://github.com/BelaPlatform/trill-processing-library/
The accompanying Processing sketch, `TrillFlexRaw.pde`, listens for
touch information on the Arduino serial port* and displays it in a
render of a each of the channels of Trill Flex.
 */

#include <Trill.h>
#define MOZZI_CONTROL_RATE 64    // Hz, powers of 2 are most reliable; 64 Hz is actually the default, but shown here, for clarity
#include <Mozzi.h>
#include <Oscil.h> // oscillator template
#include <tables/sin2048_int8.h> // sine table for oscillator

// use: Oscil <table_size, update_rate> oscilName (wavetable), look in .h file of table #included above
Oscil <SIN2048_NUM_CELLS, MOZZI_AUDIO_RATE> aSin(SIN2048_DATA);
Oscil <SIN2048_NUM_CELLS, MOZZI_AUDIO_RATE> bSin(SIN2048_DATA);
Oscil <SIN2048_NUM_CELLS, MOZZI_AUDIO_RATE> cSin(SIN2048_DATA);
Oscil <SIN2048_NUM_CELLS, MOZZI_AUDIO_RATE> dSin(SIN2048_DATA);

Trill trillSensor;
int cont = 0;

void setup() {
	// put your setup code here, to run once:
	Serial.begin(115200);
	int ret = trillSensor.setup(Trill::TRILL_FLEX);
	if(ret != 0) {
		Serial.println("failed to initialise trillSensor");
		Serial.print("Error code: ");
		Serial.println(ret);
	}
  // when the slider is connected we increase the
  // prescaler to deal with the increased baseline
  // capacitance it brings
  trillSensor.setPrescaler(3);
  delay(10);
  trillSensor.setNoiseThreshold(200);
  delay(10);
  // after any prescaler change, it's always good to update
  // the baseline, too.
  trillSensor.updateBaseline();
   
  
  startMozzi(); // :)
  aSin.setFreq(440); // set the frequency
  bSin.setFreq(440*3/4); // set the frequency
  cSin.setFreq(440*6/4); // set the frequency
  dSin.setFreq(440*2); // set the frequency
}


void updateControl(){
  // put changing controls in here
}


AudioOutput updateAudio(){
  return MonoOutput::from8Bit(aSin.next()); // return an int signal centred around 0
}

void loop() {
	// put your main code here, to run repeatedly:
	delay(100);
	trillSensor.requestRawData();

  //Número de fila
  cont = 0;

  //Leemos toda la fila
	while(trillSensor.rawDataAvailable() > 0) {
		int data = trillSensor.rawDataRead();
		if(data < 1000) Serial.print(0);
		if(data < 100) Serial.print(0);
		if(data < 10) Serial.print(0);
		Serial.print(data);
		Serial.print(" ");
    cont++;
	}
	Serial.println(" ");
}
