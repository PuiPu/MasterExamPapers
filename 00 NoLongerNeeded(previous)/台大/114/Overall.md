# 系統
## CO
> RISC-V 有考
1. instruction
	1. floating point
2. cpu time
	1. CPI
3. pipeline
	1. 5 stage : IF, ID, EX, MEM, WB
	2. delay slot
4. memory
	1. cache
		1. page, block
		2. associatively
## OS
1. process
	1. pid
		1. pid = 0, 
		2. pid > 0, 
	2. scheduling
		1. time
			1. average waiting time
		2. type
			1. round-robin
			2. deadline monotonic scheduling
2. concurrent process
	1. critical section
	2. semaphore, mutex lock
3. disk
	1. RAID (Redundant array of inexpensive disks)
		1. RAID 5
		2. MTBF
		3. RAID 10
4. memory
	1. virtual memory
		1. TLB (Translation look-aside buffer)
		2. page fault
			1. LRU (Least recently used)
5. file system
# 資演
1. sort
	1. quicksort 變形
2. recurrence
	1. Akra-Bazzi (general of master theorem)
	2. solve recurrence relation
3. machine learning
	1. c-means clustering algo.
4. dynamic programming
	1. LCS 變形 (DNA potein matching)
5. graph
	1. all source shortest path 變形 (化學式看成 undirected graph, 做 relaxation)
	2. max flow (應用在 elimination of sports team in a group)
	3. BFS (Breadth-First search)
6. greedy
	1. 0-1 knapsack
7. order of growth
	1. complexity comparison
8. tree
	1. binary tree v.s. binary search tree
9. hash
	1. "uniform hash family" v.s. "universal hash family"
	2. collision