      LDR R1, 100
      LDR R2, 101
      SUB R3, R1, R2
      CMP R3, #0
      BLT SALTA
      STR R3, 102
SALTA:
      HALT