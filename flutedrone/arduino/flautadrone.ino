#include <Trill.h>
#define MOZZI_CONTROL_RATE 64
#include <Mozzi.h>
#include <Oscil.h>
#include <tables/sin2048_int8.h>
#define MAX_VOICES 4   // max simultaneous touches
#include <Smooth.h> 


// --- Oscillator bank ---
/* Oscil <SIN2048_NUM_CELLS, MOZZI_AUDIO_RATE> osc[MAX_VOICES] = {
  Oscil<SIN2048_NUM_CELLS, MOZZI_AUDIO_RATE>(SIN2048_DATA),
  Oscil<SIN2048_NUM_CELLS, MOZZI_AUDIO_RATE>(SIN2048_DATA),
  Oscil<SIN2048_NUM_CELLS, MOZZI_AUDIO_RATE>(SIN2048_DATA),
  Oscil<SIN2048_NUM_CELLS, MOZZI_AUDIO_RATE>(SIN2048_DATA)
}; */

Oscil <2048, MOZZI_AUDIO_RATE> a0Sin(SIN2048_DATA);
Oscil <2048, MOZZI_AUDIO_RATE> a1Sin(SIN2048_DATA);
Oscil <2048, MOZZI_AUDIO_RATE> a2Sin(SIN2048_DATA);
Oscil <2048, MOZZI_AUDIO_RATE> a3Sin(SIN2048_DATA);

// --- Per-voice parameters ---
float amplitudes[MAX_VOICES] = {0};
float freqs[MAX_VOICES] = {0};

Trill trillSensor;
boolean touchActive = false;


void setup() {
  // Initialise serial and touch sensor
  Serial.begin(9600);
  int ret = trillSensor.setup(Trill::TRILL_FLEX);
  if(ret != 0) {
    Serial.println("failed to initialise trillSensor");
    Serial.print("Error code: ");
    Serial.println(ret);
  } else {
    Serial.println("the sensor was found");
  }

  trillSensor.setMode(Trill::CENTROID);
  delay(10);
  trillSensor.setPrescaler(3);
  delay(10);
  trillSensor.setNoiseThreshold(200);
  delay(10);
  trillSensor.updateBaseline();

  a0Sin.setFreq(440);
  a1Sin.setFreq(0);
  a2Sin.setFreq(0);
  a3Sin.setFreq(0);
  startMozzi();
}

// --- Control update (runs at CONTROL_RATE) ---
void updateControl() {
  trillSensor.read();

  int numTouches = trillSensor.getNumTouches();
  Serial.println(numTouches);
  for(int i = 0; i < numTouches; i++) {
      float pos = trillSensor.touchLocation(i);

      switch (i) {
        case 0:  a0Sin.setFreq(pos / 3); Serial.println("1"); break;
        case 1:  a1Sin.setFreq(pos / 3); break;
        case 2:  a2Sin.setFreq(pos / 3); break;
        case 3:  a3Sin.setFreq(pos / 3); break;
        default: break;
      }
    }

}

// --- Audio generation (runs at AUDIO_RATE) ---
AudioOutput_t updateAudio(){

int32_t asig = (int32_t)
    (a0Sin.next() * 0.2 +
    a1Sin.next() * 0.2 +
    a2Sin.next() * 0.2 + 
    a3Sin.next() * 0.2)>>1;
    
  return MonoOutput::from8Bit(asig);
}

// --- Main loop ---
void loop() {
  audioHook();
}

