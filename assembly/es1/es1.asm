      MOV R1, #100
      MOV R2, #5
RIPETI:
      STR R2, [R1]
      ADD R2, R2, #5
      ADD R1, R1, #1
      CMP R1, #110
      BNE RIPETI
      HALT
