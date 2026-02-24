---
tags:
  - important
---
# transpose
1. $(A^T)^T = A$
2. $(AB)^T = B^TA^T$
# inverse
1. $(A^{-1})^{-1} = A$
2. $(AB)^{-1} = B^{-1}A^{-1}$
	1. $(AB)(B^{-1}A^{-1}) = AA^{-1} = I$
# determinant
1. $det(A^{-1}) = \frac{1}{det(A)}$
	1. $1 = det(AA^{-1}) = det(A)det(A^{-1})$
2. $det(A^T) = det(A)$
	1. $A^T$ by row 展開 $\equiv$ $A$ by col 展開
	2. by (recursive) definition, by row & by col 展開的結果是一樣的
3. 