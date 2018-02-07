# 07/02/2018 - Consoli, Livella, Soldini
Prove con piatti riscaldati e Marlin.

Modificata riga 291 nella configurazione del Marlin per abilitare il sensore:
```
#define TEMP_SENSOR_BED 1
```

Modificata riga 309 in `pins.h` per impostare il pin del piatto (forse questa modifica non è necessaria):
```
#define HEATER_BED_PIN 8
```

In allegato:
* *Configuration.h* aggiornato
* *pins.h* aggiornato
