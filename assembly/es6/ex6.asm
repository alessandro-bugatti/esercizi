/Scrivere il programma Assembly che verifica se il numero
/presente nell'area di memoria 30 è compreso fra i
/due numeri naturali che si trovano rispettivamente nelle
/aree di memoria 31 e 32 e scrive nella cella 33 il numero 1 se è 
/compreso, 2 se invece è esterno all'intervallo. Si può supporre
/che il numero nella cella 31 sia minore del numero nella cella 32

      LDR R1, 30
      LDR R2, 31
      LDR R3, 45
      MOV R4, #1
      MOV R5, #2
      CMP R1, R2
      BLT ESTERNO
      CMP R1, R3
      BGT ESTERNO
      STR R4, 33
      B FINE