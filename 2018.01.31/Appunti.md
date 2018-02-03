# 31/01/2018 - Livella, Soldini
* Rimossi i residui delle stampe precedenti dal vetro
* Fix collegamenti dello stepper dell'estrusore alla RAMPS
* Collegamento e test del circuito di alimentazione dei piatti (apparentemente non funzionante)
* Modificata la velocità di auto-homing nella configurazione del Marlin (righe 1001-1002)
```
// Homing speeds (mm/m)
#define HOMING_FEEDRATE_XY (10*60)
#define HOMING_FEEDRATE_Z  (4*60)
```

In allegato:
* *Configuration.h* aggiornato
* Schema collegamenti circuito alimentazione piatti e datasheet componenti
