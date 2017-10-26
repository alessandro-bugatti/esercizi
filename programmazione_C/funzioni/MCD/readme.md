# Calcolo del massimo comun divisore (MCD)

Si scriva una funzione che, dati due numeri interi positivi come parametri, restituisca il MCD tra i due, cioè il più grande numero che divide entrambi.

Si utilizzi dapprima un algoritmo a forza bruta e successivamente si riscriva la funzione utilizzando [l'algoritmo di Euclide](https://en.wikipedia.org/wiki/Euclidean_algorithm), dove, dati i due numeri *a* e *b*, con *a* ≤ *b*, si procede nel seguente modo:
1. si prende il resto della divisione tra *a* e *b*
    - se il resto è zero allora il MCD è *b*
    - altrimenti il nuovo valore di *a* sarà *b* e il numero valore di *b* sarà il resto appena trovato e si ritorna al punto 1.

Si scriva successivamente un semplice programma per verificare la correttezza della funzione scritta.
