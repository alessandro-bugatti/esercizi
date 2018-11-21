# Cifratura Run-length

Una semplice codifica *lossless* per le immagini, chiamata [Run-length encoding (RLE)](https://en.wikipedia.org/wiki/Run-length_encoding), prevede che se l'immagine contiene **n** caratteri uguali consecutivi, questi vengano sostituiti con il valore **n** seguito dal singolo carattere che si ripete. Ad esempio

 <pre>
 dddd -> 4d
 affggg -> a2f3g
 ffffffffffffff -> 9f5f
 </pre>

Come si vede, nel caso il numero di occorrenze consecutive dello stesso carattere sia maggiore di 9, la sequenza viene spezzata in più parti, in modo da semplificare la fase di decodifica. Sempre per evitare problemi in fase di decodifica si supponga che la stringa da codificare **contenga soltanto caratteri**, non cifre.

Si scriva una funzione che accetta come parametri due stringhe, la prima che contiene il testo da codificare e la seconda il testo codificato con l'algoritmo esposto sopra, supponendo che la seconda stringa sia sempre in grado di contenere la versione codificata della prima.

 Si scriva successivamente un programma per testare la correttezza della funzione creata.
 
 Suggerimento: si provi anche a scrivere la funzione che fa la decodifica.
