# Differenze vettori-puntatori

Sebbene da un punto di vista sintattico vettori e puntatori possano essere trattati spesso in modo simile, sono sostanzialmente due cose diverse
- un vettore individua un'area di memoria di grandezza definita, pertanto allocata e utilizzabile dal programma
- un puntatore contiene un indirizzo, quindi può essere utilizzato per "puntare" a una qualsiasi area di memoria e quindi anche a quella di un vettore. Se punta all'area di memoria di un vettore può essere trattato nello stesso modo, utilizzando la notazione con le parentesi graffe.
- un puntatore può variare l'indirizzo a cui punta nel corso dell'esecuzione di un programma, un vettore no, in quanto lo stesso concetto non ha senso
Nel codice vengono mostrati alcuni esempi che evidenziano quanto scritto sopra.