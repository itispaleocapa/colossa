# 24/01/2018 - Livella, Merelli, Soldini
In precedenti sessioni non documentate è stato montato e collegato l'estrusore e sono stati effettuati dei piccoli test.

Oggi abbiamo a provato a stampare un hello world [https://www.thingiverse.com/thing:16621]; per un problema di comunicazione la stampa è terminata circa a metà, ma ci è bastato per accorgergi di alcuni problemi, tra cui il piano di stampa che non è perfettamente perpendicolare all'asse, e che la stampa risulta specchiata rispetto all'asse x.
![Prova stampa 1](https://i.imgur.com/vSGIIGX.jpg)

Abbiamo modificato la configurazione del Marlin, invertendo la direzione dello stepper dell'asse x
`#define INVERT_X_DIR true` (riga 745)

Abbiamo fatto un test di stampa con l'hello world di prima, ma senza la base, soltanto le lettere, per verificare il corretto funzionamento dell'asse.
Il risultato e positivo (nell'immagine si vede `lo` di `hello` e `ld` di `world`)
![Prova stampa 2](https://i.imgur.com/UCHaXTI.jpg)

In allegato il file `Configuration.h` (potrebbero essere presenti anche modifiche varie effettuate il 16/12/2017) e i 2 stl utilizzati.
