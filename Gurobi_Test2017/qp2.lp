\ Model qp
\ LP format - for model browsing. Use MPS format to capture full model detail.
Minimize
  2 C0 + [ 2 C0 ^2 + 2 C0 * C1 + 2 C1 ^2 + 2 C1 * C2 + 2 C2 ^2 ] / 2 
Subject To
 c0: C0 + 2 C1 + 3 C2 >= 4
 c1: C0 + C1 >= 1
Bounds
Generals
 C0 C1 C2
End
