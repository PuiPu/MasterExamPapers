# recursion
1. master theorem & recursion tree 的關係 [時間複雜度 — 遞迴(下) — Master Theorem](https://mycollegenotebook.medium.com/%E6%99%82%E9%96%93%E8%A4%87%E9%9B%9C%E5%BA%A6-%E9%81%9E%E8%BF%B4-%E4%B8%8B-master-th-307ad4608ab6)

# LA
1. determine 是用來決定是否有反矩陣的
	1. 求 determine 的方法
		1. n=2, 3, 用 
2. 求 inverse matrix
	1. 先判斷有沒有 inverse matrix 存在
		1. `存在`, (1) by definition(AB = BA = I), use argument matrix form 去解 (2) determine + adjoint matrix
		2. `不存在`, 求近似解 (least square problem)
3. eigen vector, value
	1. 定義是甚麼 ? (非常非常重要)
	2. diagonaziable : non-singular matrix X, such that $$X^{-1}AX = D \\ X: eigen-vector, D: eigen-value$$