/Scrivere il programma Assembly che scrive in output il prodotto di due numeri
/a e b forniti in input dall'utente. Si può supporre che i numeri forniti in 
/input siano interi positivi
      INP R0, 2
      INP R1, 2
      MOV R2, #0
CICLO:
      CMP R1, #0
      BEQ FINE
      ADD R2, R2, R0
      SUB R1, R1, #1
      B CICLO
FINE:
      OUT R2,4
      HALT
