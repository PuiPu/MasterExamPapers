# Floating point
## IEEE 754
## 考題
1. 轉換
	1. (base 10) to (base 2)
	2. (base 2) to (base 10)
2. range
3. addition
### representation
- mode
	- single precision (32-bit) : (S)1-bit + (E) 8-bit + (F) 23-bit
		- ex. C++ 的 float
	- double precision (64-bit) : (S)1-bit + (E) 
		- ex. C++ 的 double
- notation
	- S(ign) + E(xponent) + F(raction)
	- $(-1)^S + (1.F) \cdot 2^{(exponent - bias)}$
	- $bias = 2^n-1$
- Q: why bias notation ?
	- unsigned number 的 comparison (從左到右比較 1 的數量多寡) 快很多，而且硬體簡單
	- 只要 excess - X
		- X = 127(0111 1111), when <u>single precision</u>
		- X = 255(0111 1111 1111 1111), when <u>double precision</u>
- range
	- $\pm 0$
	- $demormalized$ (要不是題目要求，遇到 denormalized 就寫 underflow 或 overflow)
	- $floating \: point$
	- $\pm \infty$
	- $NaN$
### operation
#### addition
- step
	- 比較 sign 大小，轉換成 exponent 比較大的那個
	- 正規化
#### multiplication
[[OS_mindmap#ability]]
