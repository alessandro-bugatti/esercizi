# Cifratura con lo XOR

Si scriva una funzione che accetta come parametro una stringa e che la modifichi in modo che **ogni carattere** venga messo in XOR bit a bit con la sequenza esadecimale **5A**. Si ricorda che l'operatore di XOR binario nel C è rappresentato dal simbolo **^**. Il funzionamento è quello di fare lo XOR tra i singoli bit dei due operandi, come si può vedere nel seguente esempio

<pre>
a = 11001000
b = 10111000
c = a ^ b

    11001000  
  ^ 10111000
    --------
c = 01110000
</pre>

Si scriva successivamente un programma per testare la correttezza della funzione creata. Si ricorda che, per le caratteristiche dell'operatore XOR, una seconda applicazione della funzione inverte l'elaborazione e riporta alla stringa di partenza.
