
# GUITALELE
![image](guitalele.png)
Este proyecto está basado en el prototipo Trill Guitar de la web de Bela y para la impresión 3D nos hemos basado en un modelo 3D publicado en Printables.
Prototipo 1: #[Trill Guitar](https://blog.bela.io/creating-a-guitar-with-trill-and-raspberrypi/).
Prototipo 2: #[Ukelele 3D](https://www.printables.com/model/791551-ukulele).
Se trata de un ukelele o de una guitarra pequeña, con sensores táctiles que permite tocar acordes pregrabados con solo pasar el dedo por el sensor que está donde las cuerdas de la guitarra. Los sensores del traste permites seleccionar el acorde que va a sonar. Está prototipado con una placa [Bela](https://bela.io/), y el código para la gestión de los sensores y la reproducción de los audios es [Pure Data](https://puredata.info/). 

Adaptaciones: 
* Se ha sustituído la Raspberry Pi por una placa Bela, con motor de audio propio en Pure Data.
* Se ha modificado ligeramente el modelo para permitir el cableado de los trill.
* Se han programado los sensores trill para permitir la interpretación de acordes.
* Se ha eliminado la pantalla al menos, en su primera versión.

## MATERIALES DE LA PARTE ELECTRÓNICA

### Versión 1. V1.
* Placa Bela mini.
* Sensor Trill tipo bar x2
* Sensor Trill tipo square
* Sensor hub
* Cables de pin para alargar las conexiones.
* Powerbank.

## CONSTRUCCIÓN

### Lista de materiales: 

* 1 x placa Bela: [https://eu.shop.bela.io/collections/bela-and-bela-mini/products/bela-gem-stereo](https://eu.shop.bela.io/collections/bela-and-bela-mini/products/bela-gem-stereo?variant=57799327646077)
* 2 x sensores trill bar: [https://eu.shop.bela.io/collections/trill/products/trill-bar](https://eu.shop.bela.io/collections/trill/products/trill-bar)
* 1 x sensor tril square: [https://eu.shop.bela.io/collections/trill/products/trill-square](https://eu.shop.bela.io/collections/trill/products/trill-square)
* 1 x sensor trill hub: [https://eu.shop.bela.io/collections/trill/products/trill-hub](https://eu.shop.bela.io/collections/trill/products/trill-hub)
* 1 x cables de audio: [https://eu.shop.bela.io/collections/extras/products/audio-adapter-cables-3](https://eu.shop.bela.io/collections/extras/products/audio-adapter-cables-3)
* 1 x cable molex para alargar uno de los sensores: [ejemplo en amazon](https://www.amazon.es/InLine-transmisi%C3%B3n-veloc%C3%ADmetro-Ventilador-33328M/dp/B0FC6KS4T2/ref=sr_1_47?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=1FAQ3U6B4HRAQ&dib=eyJ2IjoiMSJ9.27wRj6Cb_X60uoDDwg6rJ95LPzQNAtXGfG2dzfwWALWhMb-2on-sV_n9SY4FnA0Q4nk8BfJour09iAZULnPDgn5DLDiGR6UugTYDjSMcT_96pGcazHbVrUKmZHqaLAv87AtJayWAqghuZu_9FSvHcbIfb4SAg9WYc5x1f4rfozDlooERS8JYKSl7uBjXdbDrI13As1aNRh4hXSh8kzowrhcmqj6nkSQpl9GlH-4x_6dxh0CKlAob6htNy0E-YrdpOI9Z4w8nJlt1YaAi_1K-qVlC28dM6SeMwZWWUOvK-dg.ac4NkeE-55GfqwoK-k7bSiICQiVAfTTkQ9U-dyY2t0c&dib_tag=se&keywords=cable+3+pines+Molex&qid=1772741326&sprefix=cable+3+pines+molex%2Caps%2C265&sr=8-47)
* (opcion 1) 1 x bateria:
* (opcion 1) 1 x cable usb-c: hembra: [propuesta de amazon](https://www.amazon.es/RUNCCI-YUN-conector-montaje-resistente-hebilla/dp/B0CL9F34GT/ref=sr_1_3_sspa?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=2ULOUEEC8IE2O&dib=eyJ2IjoiMSJ9.tsGdA7LHD6ZZd45ueKgAZ3H_5qQWjS_nR455zfgwxVbCw9rkWrkK1Fah2FZqBpECOBIKLyPDaMeBne903cXBFCAby_hjKRIdeXdjZnTKrCkyaS0O2YF8WmSKwcQuwsDRJ0cGRZX_yC8D4T3TeoXSQZfNgGUIpoUFmrq_KhnmU_sw_HHfYg-jGT6tK0E4D6Wl51sAzZ4gPOSDOFhW01YGiF0sGixtbfaknORgED45ZZo7c14QZ8JzPMUDsK8aIOzbUb9B37MWjeZvHCAsaybprwL0i47vFxWXmkQJDchlPVc.8mhfTfnYC1liZHiBepHCXIdyNoB2a9Ui4iWL6yPmShw&dib_tag=se&keywords=usb+c+female&qid=1772741410&sprefix=usb+c+fema%2Caps%2C271&sr=8-3-spons&aref=4ofBWFUna2&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)
* 

