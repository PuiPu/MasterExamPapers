---
cssclasses:
  - 2026.4.28
---
# 12.1 what is binary tree ?
- binary-search-tree property
	- let $x$ be a node in BST
	- left subtree y
		- $y.key \leq x.key$ 
	- right subtree y 
		- $y.key \ge x.key$
# 12.2 querying a binary search tree
1. 所有的 querying operation 都在 O(h) 內可以執行完, h 為 binary search tree 的 height
2. searching
3. minimum & maximum (binary-search-tree property)
	1. minimum : leftest node 
	2. maximum : rightest node
4. successor & predecessor
	1. 都是 sorted order by inorder tree walk
	2. successor
		1. def : inorder 的 next node
		2. type
			1. case 1 : 
			2. case 2 : 
	3. predecessor
		1. def : inorder 的 previous node
5. insert & delete
	1. insert
		1. 找到位置(binary search property)，然後插入
	2. delete [Day13 -- Decrease and Conquer - Binary Search Tree（上）](https://ithelp.ithome.com.tw/articles/10240495)
		1. 有 3 cases (第三個有點 tricky)
		2. Q: 我還是看不懂 textbook 的 pseudo-code
```
- BST T
	- left subtree
	- right subtree
```