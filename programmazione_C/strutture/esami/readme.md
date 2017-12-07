# Programma per la gestione degli esami

Si scriva un programma che consenta la gestione degli esami di una serie di studenti.
Si creino tre strutture in questo modo:

* **Data**:  questa struttura dovrà contenere le informazioni su una data in termini di giorno, mese e anno.
* **Esame**: questa struttura dovrà contenere le informazioni sul nome dell'esame, la data di registrazione e sul voto ricevuto.
* **Studente**: questa struttura dovrà contenere informazioni anagrafiche (matricola, nome, cognome) e l'elenco degli esami sostenuti con il relativo voto.


Le funzionalità del programma dovranno essere le seguenti:
* Aggiungere un nuovo studente
* Aggiungere un esame a uno studente, con nome, data di registrazione e voto.
* Produrre un elenco degli esami dati da un certo studente
* Produrre l'elenco degli studenti che hanno passato un certo esame
* Produrre un elenco ordinato per cognome di tutti gli studenti.
* Produrre l'elenco degli studenti ordinato per media dei voti degli esami. Se due studenti avessero la stessa media devono essere ordinati per ordine alfabetico per cognome.

Il tutto dovrà essere gestito attraverso un menù di scelta testuale che permetta all'utente di scegliere la funzionalità desiderata.

## Migliorie suggerite
* Permettere anche di modificare i dati anagrafici di uno studente o di eliminare lo studente dal programma.
* Controllare la correttezza delle date inserite dall'utente (ad esempio 22/07/2017 è corretta, 31/02/2017 è sbagliata)
* Visualizzare tutti gli esami dati dagli studenti in un certo intervallo di date.
* Stampare l'elenco di tutti gli esami in cui c'è almeno uno studente che l'ha sostenuto, con il numero degli studenti che l'hanno sostenuto.
* Provare a utilizzare la funzione [qsort](https://en.wikipedia.org/wiki/Qsort) della libreria standard per ordinare gli studenti per voto medio degli esami, da quelli con media maggiore a quelli con media minore.
