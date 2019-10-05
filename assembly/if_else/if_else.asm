/ Scrivere il programma Assembly che confronta il valore di due 
/ numeri naturali che si trovano rispettivamente nelle aree di 
/ memoria 100 e 101: se il primo è maggiore del secondo 
/ scrive la differenza nell'area di memoria 103, altrimenti 
/ scrive la differenza fra il secondo e il primo nell'area 
/ di memoria 104.

      LDR R1, 100
      LDR R2, 101
      SUB R3, R1, R2
      CMP R3, #0
      BLT CAMBIA
      STR R3, 103
      B FINE
CAMBIA:
      SUB R3, R2, R1
      STR R3, 104
FINE:
      HALT