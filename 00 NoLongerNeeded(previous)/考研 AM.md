# recursion
[[AM { ch4 divide and conquer }]]
# dynamic programming (DP)
[[AM { ch14 dynamic programming }]]
- 確保每一步都是 optimal (P1: Optimal substructure)，接著在推至最後為 optimal solution
- DP 有價值的地方 (P2: Overlapping subproblem)，不然用 recursion 就可以解決了，DP 也不會增加效能
# binary search tree (BST)
[[AM { ch12 binary search tree }]]
[[AM { ch13 red-black tree }]]
>  note : red-black tree 的 insert/delete 都是從基本的 BST 去延伸而來的
1. 是 binary search 性質的 tree
2. operation : in O(h)
	1. insert
	2. delete
3. balanced BST
	1. 因為如果 binary tree 沒有 insert/delete 好的話，就無法保證 operation 在 O(nlgn) 內
	2. rotation $\rightarrow$ 因為 insert/delete 會影響 property
	3. type
		1. AVL tree
		2. red-black tree
# hash
[[AM { ch11 hash tables }]]
1. form : (key , value) pair
2. method
	1. division method : $k \: mod \: m$
	2. multiplication method
	3. ...
3. open addressing
	1. double hashing 
		1. $h(k,i) = (h_1(k) + ih_2(k)) \: mod \: m$
	2. linear probing (general case of doubling hashing)
		1. $h(k,i) = (h_1(k)+i) \: mod \: m$
4. bloom filter [探索緩存穿透的極速密碼 — Bloom Filter: **正面對決緩存穿透! 如何極速、有效地應對？**](https://medium.com/@hohshencode/%E9%9D%A2%E5%B0%8D%E7%B7%A9%E5%AD%98%E7%A9%BF%E9%80%8F%E6%8C%91%E6%88%B0-%E5%A6%82%E4%BD%95%E6%A5%B5%E9%80%9F-%E6%9C%89%E6%95%88%E5%9C%B0%E6%87%89%E5%B0%8D-%E6%8E%A2%E7%B4%A2%E7%B7%A9%E5%AD%98%E7%A9%BF%E9%80%8F%E7%9A%84%E6%A5%B5%E9%80%9F%E5%AF%86%E7%A2%BC-bloom-filter-54bf03713a63)
	1. 目的 : 確認不存在
5. 