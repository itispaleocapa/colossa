# 06/12/2017 - Livella, Soldini
Abbiamo testato con successo lo sketch del motore scritto la scorsa volta, il motore si muove in entrambe le direzioni (il problema era nel cavo che andava dal driver all'Arduino che non conduceva).

Abbiamo usato un Marlin non modificato per provare a muovere il motore, inizialmente il motore si muoveva in entrambe le direzioni ma poi ha iniziato a dare problemi.
**Problema:** il motore non funziona correttamente con il Marlin (non modificato)

Driver: http://www.futurashop.it/STEPDRIVER35A-DRIVER-STEPPER-3,5A
Motore: http://www.rd-lab.it/it/motori-stepper-altre-foto-nema-23#23-57L112DS

Frequenza massima raggiungibile: 500us (montato) di delay quindi 1,25KHz di frequenza con 1/16 di microstep a 3200 step al giro

## Posizione switch
|  | S1 | S2 | S3 | Micro step | Pulse | Note
|--|----|----|----|------------|-------|-----
Test con Bolognini |  Off | Off | On | 16 | 400
Ultimo test effettuato | On | Off | On |  2/A | 400 | sembra muoversi più velocemente

In allegato un semplice sketch (ricavato con lo sketch della scorsa volta), con il quale il motore di un asse della Colossa si muove correttamente, in entrambi i sensi e con entrambe le configurazioni degli switch indicate sopra.
