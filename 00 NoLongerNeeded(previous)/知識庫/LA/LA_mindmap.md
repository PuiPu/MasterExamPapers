# decomposition
- LU decomposition
- 
---
# determinant
- recursion definition : Laplace expansion
- 降階
	- det(A) = 0
		- 整 row/col 為 0
- property
	- det(AB) = det(A)det(B)
---
# vector space
- 8-axioms
## subspace
- det
## linear combination
- 4 大子空間
	- Row Space (RS) = { A 之 row 組合 }
	- CS Space (CS) = { A 之 col 組合 }
	- Kernel/Null Space (Ker/N) = { 齊次方程(Ax=0) 之解  }
	- Left Kernel (LKer) = { yA = 0 之解 }
## span(生成空間)
- spanning set span(S) = { S 之任意組合 }
## linear independent
- $c_1v_1 + c_2v_2 + \cdots + c_nv_n = 0$ 
	- $\rightarrow c_1=c_2=\cdots=c_n=0$  
- 判斷方式
	- Ax = 0 (kernel)
---
# Basis
- 定義 
	1. 生成(span) & 獨立(independent)
	2. 同時為 <u>最大生成集</u> & <u>最小獨立集</u>
- dimension dim(V)
	- S 為 V 之一 basis, dim(V) = { S 中向量個數 }
- 判斷方法
	- dim = n
	- 判斷是否獨立 (Ax=0)
