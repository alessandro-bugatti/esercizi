      LDR R0, 100
      LDR R1, 101
      CMP R0, R1
	  BGT STAMPA
	  MOV R1, R0	
STAMPA:
	  OUT R0, 4
	  HALT
	
