# 4EM

Esercizio di complessità media sui file e sulle strutture

## Traccia

Si realizzi in C un programma per consultare un archivio di viaggi ferroviari.

La base dati consiste in un file di testo chiamato viaggi.dat, in cui ogni riga descrive una viaggio nel formato:

`<destinazione> <data> <metri> <tipo>`

La destinazione è una stringa lunga al massimo 20 caratteri che non contiene spazi, la data è una stringa nel formato GG/MM/YYYY,
la durata del viaggio in metri è espressa come numero intero. Il tipo di viaggio è un carattere che può valere "A" (viaggio di andata) o
"R" (viaggio di ritorno). I dati sono separati da uno spazio. Non si deve assumere nessun ordinamento per le righe, ed il numero di righe non è noto a priori.
Ad esempio:

milano 01/03/2011 80000 R
genova 03/06/2011 100000 A
bologna 01/02/2011 100000 A
torino 15/01/2011 120000 R
milano 20/01/2011 80000 R
torino 01/01/2011 80000 A

Si desidera realizzare un programma per visualizzare alcune statistiche sui viaggi effettuati. Il programma riceve come unico parametro sulla linea di comando il nome di una località e deve visualizzare sullo schermo:
-	I chilometri totali effettuati VERSO quella località
-	La data dell'ultimo viaggio effettuato verso quella località
-	Il costo totale dei viaggi, sapendo che la tariffazione è di 5 euro per ogni viaggio più 10 cent. al chilometro.

