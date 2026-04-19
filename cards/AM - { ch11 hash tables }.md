---
cssclasses:
  - 2026.4.19
---
![[Pasted image 20260419142938.png]]
# 11.1 direct-address table
1. universal $U = \{ 0, 1, \cdots, m-1 \}$, `m` is not too large
2. to represent *dynamic set*, can use direct-address table, denoted as $T[0:m-1]$ 
	1. each position, or slot
# 11.2 hash table
1. hash function $h : U \rightarrow \{ 0, 1, \cdots, m-1\}$
	1. simple way : $h(k) = k \: mod \: m$ 
2. hash value of key k : $h(k)$
3. problem : collision
	1. two keys hash to same slot
4. solution of collision
	1. independent uniform hashing (ideal case) [III Data Structures](https://hackmd.io/@ShawnNTU-CS/rkV71t87-e)
		1. random output ??? 
		2. 分布均勻
	2. chaining ![[Pasted image 20260419151815.png]]
	3. 每個 slot 後面接 linked list
		1. double linked list 的 delete 是 O(1)
5. analysis of hash
	1. load factor $\alpha = \frac{n}{m}$ (average number of elements store in a chain)
	2. function is `uniform` : given element is equally likely to hash into any of m slots
		1. independent uniform hashing : 當 element 要做 hashing 的時候，跟 other elements hash to 無關 (independent)
	3. hashing is `unirversal` : the chance of any two distinct keys $k_1$, $k_2$ collide is at most $\frac{1}{m}$
	4. Q : 為什麼 universal independent 很重要 
		1. A : 因為在做分析的時候，這兩個條件要成立才能推出 successful / unsuccessful 的 complexity 都是  $\theta(1+\alpha)$
# 11.3 hash function
1. static hashing (although it is not recommend though)
	1. division method
		1. $h(k) = k \: mod \: m$
		2. work well for m is prime, not too close to power of 2
	2. multiplication method (這啥)
		1. $h(k) = \lfloor m(kA \: mod \: 1) \rfloor$, where $A \: is \: constant, 0 < A < 1$ 
	3. random hashing
		1. special case of random hashing : universal hashing
	4. design hashing family
		1. number theory
# 11.4 open addressing
1. probe
	1. Q: easy to insert, but complex to delete
2. double hashing
3. 