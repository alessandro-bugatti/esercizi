# Scalatura di un valore con una funzione

Si scriva una funzione che abbia come parametri due numeri reali, il primo passato per indirizzo (puntatore) e il secondo per copia. Il primo rappresenta il valore che si vuole scalare, mentre il secondo il fattore di scalatura e si vuole che la variabile da scalare venga modificata.
## Frammento di esempio:
```c
double n = 10, s = 0.5;
...
scalatura(&n, s);
```
dopo la chiamata della funzione ```scalatura``` n dovrà valere 5 