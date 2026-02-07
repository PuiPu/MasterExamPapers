# 重點
1. concept
	1. 定義
		1. nonsingular = invertible (when matrix A is square matrix)
		2. elementary matrix
		3. positive define $x^TAx > 0$, positive semi-define $x^TAx \ge 0$
	2. 定理
		1. rank-nullity theorem
2. calculation
	1. inverse matrix
		1. method
			1. argument matrix (by definition $AB = BA = I$)
			2. adjoint matrix (recusion definiton)
	2. determinant
		1. block matrix (divide & conquer)
	3. linear transformation
		1. 求 transition funciton (matrix)
			1. from $\mathbb{R}^{n} \: to \: \mathbb{R}^{m}$, exist a matrix $A \in \mathbb{R}^{m\:*\:n}$ 
	4. eigen value/vector
		1. definition : $Ax = \lambda x$
		2. method
			1. $det(A-\lambda I) = 0$
		3. implement
			1. diagonization
				1. $AX = (\lambda_1 x_1, \lambda_2 x_2 ... \lambda_n x_n)$
				2. $(x_1, x_2 ... x_n)  \begin{pmatrix} \sigma_1 & 0 & \cdots & 0 \\ 0 & \sigma_2 & \cdots & 0 \\ \vdots & \vdots & \ddots & \vdots \\ 0 & 0 & \cdots & \sigma_n \end{pmatrix}$ 
				3. $AX = XD, \; A = XDX^{-1}$
			2. projection matrix
				1. $P = AX = XDX^{-1}X$
3. factorization
	1. LU decomposition
		1. 只能用 row operation 3
	2. QR decomposition
		1. Gram-Schmidt process
	3. SVD decomposition $A = U \Sigma V^{T}$
		1. vid : [Computing the Singular Value Decomposition | MIT 18.06SC Linear Algebra, Fall 2011](https://youtu.be/cOUTpqlX-Xs?si=52Psn50UIiCc3Eky)
		2. method (TEXTBOOK p.368)
			1. calculate V
				1. compute $A^TA = V \Sigma^{T} \Sigma V^T$
				2. calculate eigen-value\vector of $A^TA$
				3. eigen-value $\sigma = \sqrt{\lambda}$, form $\Sigma$
			2. calculate U
				1. compute $AV = U \Sigma$
				2. compute U
	4. 