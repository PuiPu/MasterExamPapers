1. linked list
	1. doubly linked list
	2. implement
		1. stack
		2. queue
2. tree
	1. binary tree
	2. search tree
		1. binary search tree (BST)
		2. balance tree
			1. 原因 : BST 不能保證 height = O(logn)
			2. type
				1. AVL tree
				2. red-black tree
					1. 5 rules
						- R1 : root is black
						- R2 : 
						- R3 : 
						- R4 : 
						- R5 : 
					- rotation
						- basic
							- left rotation
							- right rotation
						- extended
							- LL
							- LR
							- RR : y insert at 
							- RL : y insert at left subtree of right subtree
	3. heap
		1. 原因 : implement priority queue 很 efficient ( insert : O(logn) , delete : O(logn) )
		2. heap property
			1. definition : 
			2. operation : heapify()
	4. B-tree
		1. 原因 : 因為 disk 的 access latency 較長，不能讓 tree 的 height 太深 -> 壓縮 height
		2. 
		
3. graph
4. 