# Disegno di un istogramma

Si scriva una funzione che accetta come parametri un vettore di *interi* **v**, un intero **n** che ne rappresenta la dimensione e un intero **max** che rappresenta l'altezza massima dell'istogramma che questa funzione dovrà disegnare a video.

Il disegno dovrà essere fatto in questo modo: supponendo che v = {23, 34, 18, 5, 28} e **max** valga 10, allora

<pre>
******
**********
*****
*
********
</pre>

cioè il valore massimo sarà normalizzato a **max** e gli altri valori verranno proporzionati di conseguenza, arrotondando all'intero inferiore.

Si scriva successivamente un programma che verifichi visivamente, attraverso l'utilizzo della funzione appena definita, l'uniformità della distribuzione dei lanci di un dado utilizzando la funzione *rand*.

### Possibile modifica
Si provi a modificare la funzione in modo che stampi l'istogramma in verticale: nell'esempio precedentemente diventerebbe:
<pre>
 *
 *
 *  *
 *  *
**  *
*** *
*** *
*** *
*** *
*****
</pre>
