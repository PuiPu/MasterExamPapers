---
cssclasses:
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
 - 