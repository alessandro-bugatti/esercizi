# Esempio di shallow copy

In questo esempio viene mostrato il meccanismo di "shallow copy", dove la copia tra due strutture non creare due copie indipendenti, ma, a causa del puntatore, ambedue fanno riferimento alla stessa area di memoria dove è memorizzata una scacchiera.
Verificare se si è in grado di rispondere a queste domande:
- Perchè la modifica della scacchiera da parte della variabile *due* genera una modifica anche nella variabile *uno*?
- Perchè la funzione azzera ha bisogno che gli venga passato un indirizzo e non un valore?
- Perchè la copia del nome avviene correttamente anche se è un vettore?
- Perchè nella funzione stampa_partita la matrice viene modificata correttamente anche se è stato passato un valore e non un riferimento come nella funzione azzera? 
