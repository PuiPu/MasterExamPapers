---
cssclasses:
  - 2026.5.12
  - 2026.5.14
note: 這裡很多不太懂，包括 recursion 的定義及代表的意思，以及用 dp 去解的差別
---
> make locally optimal choice to global optimal solution
> But, not always yield optimal solutions
# 15.1 an activity-selection problem
# 15.2 element of the greedy strategy
[knapsack problem](https://web.ntnu.edu.tw/~algo/KnapsackProblem.html)
- fractional knapsack problem can use `greedy` strategy
	- weight limit W
	- weight w of item j
	- 
- 0-1 knapsack problem cannot use `greedy` strategy
# 15.3 Huffman code
- `prefix-free` code
	- no codeword is also a prefix of some other codeword
	- 這樣才能確保 parse 是 unique 的
	- ex. 100011001101 $\rightarrow$ 100 $\cdot$ 0 $\cdot$ 1100 $\cdot$ 1101 $\rightarrow$ cafe
- codeword
	- character is represented by a unique binary string
- variable-length code
	- fixed-length code 會浪費太多空間 (ex. 6 個就至少需要 3-bit , $2^3 = 8$)
- cost ![[Pasted image 20260514152629.png]]
	- c.freq $\rightarrow$ frequency of c
	- $d_T(c)$ $\rightarrow$ depth of c's leaf in tree (length of codeword)
- construct
	- min-priority queue Q
- running time
	- depend on how to implement priority queue
# 15.4 offline caching
- goal
	- minimize cache miss
	- maximize cache hit
- greedy strategy
	- furthest-in-future (optimal)
- solution ![[Pasted image 20260514184643.png]]
	- optimal solution : S
	- $R_{c,i}$ : set of all cache configurations that can immediately follow configuration C after processing a request for block $b_i$  
