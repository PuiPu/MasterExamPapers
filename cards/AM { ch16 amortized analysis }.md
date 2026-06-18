---
cssclasses:
  - 2026.5.14
note: 看不懂，再看
---
- amortized analysis 跟 average analysis 的差別是，不包含 probability 去做分析，amortized analysis 都 guarantee 每一個 operation in the worst case
- 3 common technique
	- aggregate analysis : $T(n)/n$
	- accounting method : determine amortized cost of each operation
	- potential method : 
- two example
	- stack with additional operation MULTIPOP
	- binary counter that counts up from 0 (single operation INCREMENT)
# 16.1 aggregate analysis
# 16.2 the accounting method
# 16.3 the potential method
- each operation ![[Pasted image 20260515171251.png]]
	- $c_i$ : actual cost of i-th operation
	- $\hat{c_i}$ : amortized cost of i-th operation
	- $D_i$ : data structure that result 
	- $\Phi$ : potential function
- total cost ![[Pasted image 20260515180038.png]]
# 16.4 dynamic tables
