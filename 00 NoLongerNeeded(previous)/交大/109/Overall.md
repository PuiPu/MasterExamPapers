## tree
1. B-tree
2. Binary Search Tree
	1. deletion 需要找 successor/predecessor
	2. 因為 BST 沒辦法確保 height，所以 search 會落在 O(nlogn) ~ O(n) [skew tree]
		1. 因此要保有 tree operation 的優勢，所以才會有 balance tree 的出現 -> (1) AVL tree (2) red-black tree
3. 
## graph
1. graph connection (DS TEXTBOOK def.)
	1. connected component
	2. articulation point (DFS)
		1. 核心: 找到一個點斷掉以後還可以使其他 graph 保持 connected
2. graph k-coloring
	1. case
		1. k = 2, O(n+m), 用 BFS/DFS
		2. k $\ge$ 2, NP-complete
3. hamiltonian path
	1. def : 經過所有的點一次，所形成的 simple path (acyclic)
	2. Q: 怎麼把 hamiltonian path 用成 hamiltonain cycle
	3. reduction (NP-complete)
		> 怎麼樣從 constrained hamiltonian path 轉成 general hamiltonian cycle (like SAT -> 3-SAT)
	4. 