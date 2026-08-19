---
cssclasses:
  - 2026.4.30
---
- problem
	- problem is small enough $\rightarrow$ base case
	- other $\rightarrow$ recursive case
- method
	- *Divide* : problem into one or more same sub-problems that are smaller instances of the same problem
	- *Conquer* : the sub-problem by solving them recursively
	- *Combine* : the sub-problem solutions to form a solution to the original problem 
- math tools : recursion
- example
	- merge sort
	- matrix multiplication, nxn
		- 4 個 n/2 $\rightarrow$ O(n) = ()
		- strassen's algo. $\rightarrow$ 
- method
	- substitution
	- recursion-tree
	- master method
		- T(n) = a * T(n/b) + f(n)
# 4.1 multiplying square matrices
- $C = C + A \cdot B$
- total 
	- 8 multiplication
		- $A_{11}, \: A_{12}, \: A_{21}, \: A_{22}$
		- $B_{11}, \: B_{12}, \: B_{21}, \: B_{22}$
	- 4 addition : O(1)
- complexity
	- T(n) = 8 * T(n/2) + $\Theta$(1)
		- T(n) = O($n^3$)
# 4.2 Strassen's algorithm for matrix multiplication
- goal : reduce number of multiplcation
- total
	- 7 multiplication
	- ? addition : O($n^2$)
- complexity
	- T(n) = 7 * T(n/2) + $\Theta$($n^2$)
		- T(n) = O($n^{lg7}$)
# 4.3 the substitution method for solving recurrences
- guess the form $\rightarrow$ use mathematical induction to show the solution, find constant
# 4.4 the recursion-tree method for solving recurrences
- Cons : best `intuition` for good guess
- per-level cost
- example
	- T(n) = 3 * T(n/4) + $\Theta$($n^2$)
	- irregular example : T(n) = T(n/3) + T(2n/3) + $\Theta$(n)
# 4.5 the master method for solving recurrences
- T(n) = a * T(n/b) + f(n)
- cases $\Rightarrow$ $n^{log_b{a}}$
	- case 1 : O($n^{log_b{a}}$)
	- case 2 : O($n^{log_b{a}} lg^{k+1}n$)
	- case 3 : O(f(n)) (Hint : 可以用 recurrence tree 去證明)
- CAUTION : master theorem doesn't apply
	- situation : ??? 
	- example : T(n) = 2T(n/2) + n/lgn
		- $n^{log_b{a}} = n^{log_2{2}} = n^1$
		- 但是 n/lgn grow only logarithmically slower than n, not polynomially slower
# 4.6 proof of the continuous master theorem
- 有空再看
# 4.7 Akra-Bazzi recurrences
- deal with "floor" and "ceilings"
- 有空再看