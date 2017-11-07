# Crivello di Eratostene

Il crivello di Eratostene è un antico procedimento per il calcolo delle tabelle di numeri primi fino ad un certo numero **n** prefissato.
Il procedimento è il seguente: si scrivono tutti i numeri naturali a partire da **2** fino **n** in un elenco detto setaccio. Poi si cancellano (setacciano) tutti i multipli del primo numero del setaccio (escluso lui stesso). Si prende poi il primo numero non cancellato maggiore di **2** e si ripete l'operazione con i numeri che seguono, proseguendo fino a che non si applica l'operazione all'ultimo numero non cancellato. I numeri che restano sono i numeri primi minori o uguali a **n**.
