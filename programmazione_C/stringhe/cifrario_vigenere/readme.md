# Cifrario di Vigenère

Si scriva una funzione che accetta come parametri una matrice di caratteri e due altri caratteri, che rappresentano rispettivamente il carattere da cifrare e il carattere cifrante attuale secondo il sistema di [cifratura di Vigenère](https://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher). Il cifrario di Vigenère non è altro che la combinazione di una serie di cifrari di Cesare, alternati secondo le indicazioni della parola cifrante. Se ad esempio la parola fosse **SOLE**, il primo carattere del testo in chiaro verrebbe sostituito con il carattere del cifrario di Cesare con chiave 18 (poichè S è la 19ª lettera dell'alfabeto inglese), il secondo con il carattere del cifrario di Cesare con chiave 14 (poichè O è la 15ª lettera dell'alfabeto inglese) e così via, con il meccanismo che si ripete ogni volta che "finisce" la parola cifrante: in questo esempio la quinta lettera del testo in chiaro verrà nuovamente codificata con il cifrario di Cesare associato alla lettera S e così via.
Anche se non strettamente necessario per la codifica, si costruisca anche la tabella di Vigenère, sotto forma di matrice di caratteri che verrà poi passata alla funzione di cifratura.

Si scriva successivamente un programma per testare la correttezza della funzione creata.

Suggerimento: si scriva poi anche la funzione per decodificare un testo cifrato creato con questo sistema.
