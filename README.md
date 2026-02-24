
# LABORATORIO DE FABRICACIÓN DIGITAL MUSICAL
Este es un repositorio de instrumentos musicales realizados en el marco de MUSIC_FAB_LAB: Laboratorio de fabricación digital musical. Con la colaboración de Makespace Madrid y profesorado de diferentes escuelas de música. 
Los instrumentos son adaptaciones de prototipos existentes cuyas modificaciones atienden a criterios pedagógicos pensados en la accesibilidad dentro de la enseñanza de la música. 

Los instrumentos que se han creado en este proyecto, hasta la fecha son: 

## GUITALELE _______ [+ Info](/guitalele/GUITALELE.md)
![image](/imagenes/guitalele.jpg)
Este proyecto está basado en el prototipo Trill Guitar de la web de Bela y para la impresión 3D nos hemos basado en un modelo 3D publicado en Printables.
Prototipo previo: #[Trill Guitar](https://blog.bela.io/creating-a-guitar-with-trill-and-raspberrypi/).
Prototipo previo: #[Ukelele 3D](https://www.printables.com/model/791551-ukulele).

Adaptaciones: 
* Se ha sustituído la Raspberry Pi por una placa Bela, con motor de audio propio en Pure Data.
* Se ha modificado ligeramente el modelo para permitir el cableado de los trill.
* Se han programado los sensores trill para permitir la interpretación de acordes.
* Se ha eliminado la pantalla al menos, en su primera versión.

## SIMONDICE _______ [+ Info](/simon-dice/SIMONDICE.md)
![image](/imagenes/simon-dice.jpg)
Este proyecto está basado en el juego de Simon Dice, pero en la implementación para arduino desarrollada por DIY Machines. Con cambios en la programación.
Prototipo: #[Simon Says](https://www.diymachines.co.uk/make-your-own-simon-says-memory-game). 

Adaptaciones:
* Se han afinado los pitidos de cada botón para adecuarlos a las notas más cercanas.
* Se ha modificado el texto de la pantalla al castellano
* Se ha ampliado la distancia de cada nota para que no suene tan acelerado.
* Se ha cambiado el diseño para ampliar el número de notas.
* Se ha añadido un conector minijack para poder usarlo con auriculares o amplificación.
* Se está investigando para sustituir el pitido por grabaciones de notas musicales

## DRUMMERBOY _______ [+ Info](/drummerboy/DRUMMERBOY.md)
![image](/imagenes/drummerboy.jpg)
Este instrumento está inspirado originariamente en el primer prototito HENAR3 del proyecto educativo #[Un instrumento para Henar](uninstrumentoparahenar.org) creado por el colectivo Autofabricantes que propone una plataforma para interpretar notas musicales sobre sensores con un pequeño mazo. Sin embargo, para acomodar una instrumentación coherente que aborde diferentes aspectos musicales, se ha optado por adaptar esta idea inicial por un instrumento de percusión. Para ello, se ha buscado un prototipo de similares características, más cercano a la percusión. El prototipo encontrado está también publicado en internet. 
Prototipo previo: #[Henar](https://github.com/Autofabricantes/H3_Henar-3)
Prototipo previo: #[Desk Mat](https://www.instructables.com/Desk-Mat-to-MIDI-Drums)

Adaptaciones:
* En lugar de usar sensores de tacto o presión se utilizan micros de contacto.
* Se ha programado una placa bela en lugar de arduino para eliminar la necesidad de ordenador.
* Se han asociado bucles de ritmos, en lugar de sonidos individuales, para facilitar su utilización por alumnado con necesidades cognitivas.

## FLAUTADRONE _______ [+ Info](/drummerboy/DRUMMERBOY.md)
![image](/imagenes/flauta.png)
Este instrumento no está inspirado en otro diseño anterior. A lo largo del desarrollo del proyecto he ido planteandome la necesidad de usar un instrumento harmónico. Es cierto que el guitalele produce acordes, pero pensaba más en un instrumento que realmente pudiera controlar intervalos. Inspirado en las flautas antiguas duales que permiten hacer sonidos polifónicos y aprovechando los sensores trill flex que se adquieron en el proyecto. He querido diseñar un instrumento que pudiera tocarse usando librerías de sonidos electrónicos generados y no con grabaciones. El diseño 3d sí que está basado en uno existente y la librería de sonido se llama Mozzi.
Prototipo previo: [#[Drone Flute - Printables](https://www.printables.com/model/896094-drone-tin-whistle-fully-3d-printed-working)]
Librería usada: #[Librería Mozzi](https://sensorium.github.io/Mozzi/)]

Adaptaciones:
* El sensor Drill Flex sirve como interfaz para disparar los diferentes sonidos. 
* La librería Mozzi permite tocar estos sonidos con toda la duración que sea necesaria, tanto manteniendo la presión del sensor como sin ella.
* La forma de flauta permite sostenerla con las dos manos y poder interactuar con ella como un instrumento de viento.
