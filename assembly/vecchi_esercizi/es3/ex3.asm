# Scrivere il programma Assembly che memorizza nell’area di memoria 
# (contigua) la cui prima parola ha indirizzo 0×64 la codifica ASCII 
# delle 26 lettere dell’alfabeto, sapendo che il codice ASCII 
# codifica la lettera ‘a’ con 0×61 e la codifica della lettera ‘z’ è 
# 0x7A.
       LOADiL R1 0x64
       LOADiH R1 0x00
       LOADiL R2 0x61
       LOADiH R2 0x00
       LOADiL R3 0x7A
       LOADiH R3 0x00
CICLO: STORE R1 R2
       ADD R2 R2 0x1
#Qui contrariamente al solito si somma 1 e non 2 a R1 perchè i caratteri ASCII occupano solo un byte
       ADD R1 R1 0x1
       BLE R2 R3 CICLO
FINE:  END