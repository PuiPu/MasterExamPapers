---
cssclasses:
  - 2026.4.17
  - 2026.4.19
---
# Question
1. 寫出 linked list 的 insert / deleted pseudo-code & 用圖解釋
	1. singly linked list
	2. doubly linked list
2. 寫出 stack / queue 的 operation & 用圖解釋
	1. implement by array
	2. implement by linked list
# 10.1 simple array-based data structure : arrays, matrices, stacks, queues
## array
- contiguous memory
## matrix
- major
	- row-major
	- column-major
- store in
	- single one-dimensional
		- $M[i, j]$ ( m rows, n columns, start at s )
			- row major : s + (n(i-s)) + (j-s)
			- column major :  s + (m(j-s)) + (i-s)
		- when s=1
			- row major : n(i-1) + j
			- column major : m(j-1) + i
		- when s=0
			- row major : n * i + j
			- column major : m * j + i
	- multi-array
## stack
- LIFO : Last In, First out
- operation
	- push
	- pop
- data structure (variable)
	- top
	- size
- state
	- underflow : pop an empty stack
	- overflow : S.top exceed S.size
```
[empty]
	S.top = 0
[full]
	S.top = S.size - 1
```
## queue
- FIFO : First in, First out
- operation
	- enqueue
	- dequeue
- data structure (variable)
	- head
	- tail
```
[init]
	Q.head = Q.tail = 1
[empty]
	Q.head = Q.tail 
[full]
	Q.head = Q.tail + 1 (or)
	Q.head = 1 & Q.tail = Q.size (Q: but why ?)
```

# 10.2 linked list
1. order is determined by pointer
2. data structure (variable)
	1. next
	2. prev (doubly linked list)
3. operation
	1. insert
		1. prepend (insert front)
	2. delete
	3. search
		1. linear search (while loop)
		2. other ?
			1. binary search
4. advantage
	1. 比起 array, insert 可以在 O(1) 內時間內完成，不用像 array 還要 O(k) , $1 \leq k \leq n$
5. simplify boundary condition : sentinel (哨兵) ![[Pasted image 20260419132625.png]]
	1. sentinel 是一個 dummy object
	2. 這樣 insert / delete 都不用檢查 boundary condition (empty or full 之類的)
# 10.3 representing rooted tree
1. 用來表示 non-linear relationship (linked list is good for linear relationship)
2. binary tree
	1. data structure (variable)
		1. p (parent)
		2. right (right child)
		3. left (left child)
3. rooted tree with unbounded branching ![[Pasted image 20260419140121.png]]
	1. 用 left-child, right-sibling representation
		1. data structure (variable)
			1. x.left-child (point to leftmost child)
			2. x.right-sibling (point to sibling of x immediately to right)
 