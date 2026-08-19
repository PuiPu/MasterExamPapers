
# 數學
## LA
1. system of solution
	1. consistent
	2. inconsistent -> approximation solution : least square problem
2. linear transformation
	1. transition matrix
3. matrix
	1. rank
	2. nullity
4. subspace
	1. def: (1) ax in S (2) ax + by in S
5. QR decomposition
	1. Gram-Schmidt process
## DM
1. logic
	1. domain
	2. tautology
2. relation
	1. bijection (1-1 and onto)
	2. binary relation
3. graph
	1. degree
4. recurrence relation
	1. 
# 資演
[AVL tree](https://josephjsf2.github.io/data/structure/and/algorithm/2019/06/22/avl-tree.html)
# 系統
## OS
1. process
	1. light weight process : thread
	2. fork()
	3. race condition
	4. kernel mode / user mode
	5. process scheduling
		1. round-robin
			1. quantum
		2. 
2. synchronization
	1. mutex, semaphore
	2. example
		1. reader/writer
3. ?
	1. banker algo.
4. virtual memory
	1. swap out
	2. page table design
		1. multi-level page table
		2. hash-based page table
		3. inverted page table
5. file
	1. disk scheduling
		1. FCFS (First Come First Serve)
		2. SSTF (Short-Seek-Time First)
		3. SCAN (the elevator algo.)
	2. directory, i-node ...
	3. file allocation scheme
		1. contiguous allocation
		2. linked(link-list) allocation
		3. indexed allocation
		4. extent allocation
## CO
1. CPU performance
	1. CPU time
	2. CPI (Clock Cycle Per Instruction)
	3. ISAs
	4. MIPS (Millions of Instructions Per Second)
	5. turn around time
		1. process arrival time, CPU burst time
2. MIPS
	1. instruction
		1. register
		2. immediate
		3. arithmetic
	2. floating point
	3. datapath design (要畫圖熟悉)
	4. pipline
		1. hazard type
			1. control hazard : 
			2. data hazard : 
			3. memory hazard : 
			4. structural hazard : 
3. memory
	1. cache memory
		1. memory hierarchy
		2. cache miss
			1. write through
			2. write back
		3. cache placement & replacement policy
			1. instruction, cache line (block)
			2. situation : cache hit
			3. type
				1. direct mapped
				2. fully associative
			4. replacement
				1. LRU (least-recently-used)
				2. MRU (most-recently-used)
			5. benchmark
				1. hit rate
	2. virtual memory
		1. page fault
	3. page table design
		1. page table entry
		2. frame
	4. 