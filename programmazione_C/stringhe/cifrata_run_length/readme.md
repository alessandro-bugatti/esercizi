# Cifratura Run-length

Una semplice codifica *lossless* per le immagini, chiamata Run-length encoding (RLE), prevede che se l'immagine contiene **n** caratteri uguali consecutivi, questi vengano sostituiti con il valore **n** seguito dal singolo carattere che si ripete. Ad esempio

 <pre>
 dddd -> 4d
 aff222 -> a2f32
 ffffffffffffff -> 9f5f
 </pre>

 Come si vede, nel caso il numero di occorrenze consecutive dello stesso carattere sia maggiore di 9, la seguenza viene spezzata in più parti, in modo da non presentare ambiguità in fase di decodifica.

 Si scriva una funzione che accetta come parametri due stringhe, la prima che contiene il testo da codificare e la seconda il testo codificato con l'algoritmo esposto sopra, supponendo che la seconda stringa sia sempre in grado di contenere la versione codificata della prima.

 Si scriva successivamente un programma per testare la correttezza della funzione creata.
