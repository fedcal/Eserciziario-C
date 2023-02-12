#3EM

Questo esercizio è di livello medio. Vengono utilizzate le strutture e i file.

##Traccia

Si realizzi in C un programma per consultare un conto telefonico.
La base dati consiste in un file di testo chiamato 'conto.dat', in cui ogni riga descrive una telefonata nel formato:

`<numero_telefonico> <data> <durata> <tipo>`

Il numero telefonico è una stringa alfanumerica lunga al massimo 15 caratteri, la data è una stringa nel formato GG/MM/YYYY,
la durata della telefonata è espressa in secondi come numero intero. Il tipo di telefonata è un carattere che può valere 'E'
(telefonata in entrata) o 'U'(telefonata in uscita). I dati sono separati da uno spazio. Non si deve assumere nessun ordinamento
per le righe, ed il numero di righe non è noto a priori.

Ad esempio:

3472222222 02/01/2011 321 E
3471111111 01/01/2011 38 E
3472222222 08/01/2011 100 U
3471111111 01/02/2011 38 E

Si desidera realizzare un programma per visualizzare alcune statistiche sui numeri chiamati. Il programma riceve come unico parametro sulla linea di comando un numero di telefono e deve visualizzare sullo schermo:
-	I minuti totali di chiamate in uscita verso quel numero, con due cifre decimali
-	La durata in minuti con due cifre decimali e la data della chiamata in uscita più lunga verso quel numero
-	Il costo totale delle telefonate in uscita da quel numero, sapendo che la tariffazione è di 20 cent. di scatto alla risposta, più 12 cent. al minuto (con tariffazione al primo secondo di ogni minuto).


