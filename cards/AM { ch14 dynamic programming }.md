---
cssclasses:
  - 2026.4.30
  - 2026.5.1
  - 2026.5.11
note: 搞懂 recursion 以後，其實就很簡單了 (code 的架構就是根據 recursion case 分析來的)
---
- 像 divide and conquer
- recursively define, find `optimal solution
# 14.1 Rod cutting
- goal : maximum revenue (怎麼切可以讓效益最大化)
- recurrence ![[81259.jpg]]
	- $r_n = max \:\{\: p_i + r_{n-i} : 1 \leq i \leq n \:\}$ 
	- $r$ means revenue
	- $p_i$ = revenue that first piece has size i
 - top-down ![[Pasted image 20260430235111.png]]
## use dynamic programming for optimal rod cutting
- method
	- goal
		- sub-problem solve only `once`
		- save it, and look it up (additional memory : time-memory trade-off)
	- type
		- top-down (memorization)
		- bottom-up
	- note
		- top-down 跟 bottom-up 的 asymptotic running time, 但 bottom-up 有 better constant factor
		- 兩個都是 $\Theta(n^2)$
- reconstruct (把之前切的位置記起來，最後印出來)
	- 多一個 array $s[1:n]$ 去記住切的位置
# 14.2 matrix chain multiplication
- input sequence of dimension : <$P_1, P_2, \cdots ,P_n$>
	- $A_i$ 的 dimension 是 $P_{i-1}$ x $P_i$ 
- $A_{i:k} \: A_{k+1:j}$
	- take $p_{i-1} \: p_{k} \: p_{j}$ scalar multiplications
- ![[Pasted image 20260506185720.png]] ![[Pasted image 20260506185757.png]]
# 14.3 element of dynamic programming
## optimal substructure
- two factors of running time of dynamic-programming
	- number of subproblems overall
	- how many choice you look for at each subproblems
	- example
		- matrix chain : 
			- each at (n-1) choices $\rightarrow$ 切在哪裡(分成左右 chain)
			- $\Theta(n^2)$ each subproblem
			- total : $n * \Theta(n^2) = \Theta(n^3)$ 
- difference between greedy & dynamic programming
	- dynamic programming : first finding optimal solutions
	- greedy algorithm : first make greedy choice (look best at that time), and then solve the subproblem
## overlapping subproblem
- recursion solution 有時候會有很多的 repeated same subproblem ![[Pasted image 20260511143139.png]]
- dynamic programming 只需要 solve distinct subproblem only once, 可以 reduce exponential time to quadratic time (rod cutting problem)
	- 所以，如果沒有 overlapping 的 recursion, dynamic programming 就不能加速
- example (matrix chain multiplication)
	- recursion
		- ![[Pasted image 20260511143625.png]]
		- $T(n) = O(2^n)$
	- $\Theta(n^2)$ subproblem, dynamic programming solve each problem only once
	- total : reduce from $O(2^n)$ to $O(n^2)$
## reconstructing an optimal solution
- memorization
	- matrix chain : $m[i,j]$ 去儲存
# 14.4 longest common sequence (LCS)
- define #important 
	- prefix : sequence $X = \: < x_1, x_2, \cdots, x_m>$
		- i-th prefix of $X$ as $X_i = \:<x_1, x_2, \cdots, x_i>$
	- $c[i,j]$ : length of LCS of sequence $X_i$ & $Y_j$
- recursion ![[Pasted image 20260511172538.png]]![[Pasted image 20260511172514.png]]
- solution (Note. 是從後面往前看，看最後有沒有 match，在往前看有沒有符合)
	- brutal : 
		- 每個位置都有 "選" or "不選" 兩個選擇 $\rightarrow$ $2^m$
	- dp : 
		- 用 dp table 去計算
		- $\Theta(mn)$ 因為 each entry table take O(1) 而 table size 是 mn
- construct ![[Pasted image 20260511222320.png]]
	- take $O(m+n)$
# 14.5 optimal binary search tree
- 增加 dummy key $d_0, d_1, \cdots, d_n$ $\rightarrow$ 是因為有可能沒有在 search tree 裡面
- search
	- successful : some key $k_i$ $\rightarrow$ probability $p_i$
	- unsuccessful : dummy node $d_i$ $\rightarrow$ probability $q_i$
	- $\Sigma_{i=1}^{n} p_i + \Sigma_{i=0}^{n} q_i = 1$

