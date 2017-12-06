# 29/11/2017 - Livella, Soldini, Vitali
Abbiamo reperito il modello del driver, rifatto il cablaggio e testato il motore con un semplice sketch che alleghiamo.
**Problema:** gira soltanto in senso antiorario.

![Schema driver](https://www.futurashop.it/image/catalog/data/robotica/2846-STEPDRIVER35A/2846-STEPDRIVER35A_4-1.jpg)
```
PIN     PIN NAME   DESCRIPTION
1   	DIR-       Direction Input Cathode of Optoisolator
2       DIR+	   Direction Input Anode of Optoisolator
3       PUL-	   Pulse Input Cathode of Optoisolator
4       PUL+	   Pulse Input Anode of Optoisolator
5       EN-	       Enable Input Cathode of Optoisolator
6       EN+	       Enable Input Anode of Optoisolator
7       A+	       Stepper Motor Output Winding A Positive
8       A-	       Stepper Motor Output Winding A Negative
9       B+         Stepper Motor Output Winding B Positive
10      B-         Stepper Motor Output Winding B Negative
11      DC-        Power Supply Input Negative / 0V
12      DC+        Power Supply Input Positive /12V to +42V (Operating Voltage)
```
http://www.futurashop.it/STEPDRIVER35A-DRIVER-STEPPER-3,5A
