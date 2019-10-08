/Scrivere un programma in assembly che esegue il complemento a 1
/di 8 valori che si trovano nelle 8 celle a partire da quella di indirizzo
/100. Si suppone che ogni valore nelle celle di memoria sia o zero o uno e 
/quindi che il complemento a 1 debba essere fatto per ogni singola cella come
/se si trattase di un singolo bit di un byte.
      
      MOV R0, #99
      MOV R1, #107
      MOV R3, #0
      MOV R4, #1
CICLO:
      ADD R0, R0, #1
      CMP R0,R1
      BGT FINE
      LDR R2, [R0]
      CMP R2, #0
      BEQ UNO
      STR R3, [R0]
      B CICLO
UNO:
      STR R4, [R0]
      B CICLO
FINE:
      HALT
