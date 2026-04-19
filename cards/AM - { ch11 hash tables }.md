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
	1. 
	2. 