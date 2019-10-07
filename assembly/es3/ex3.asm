/Scrivere il programma Assembly che legge due
/numeri da input, ne fa il prodotto e lo
/stampa in output.

INP R1, 2
INP R2, 2
MOV R3, #0
CICLO:
CMP R2, #0
BEQ FINE
ADD R3, R3, R1
SUB R2, R2, #1
B CICLO
FINE:
OUT R3, 4
HALT
