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
	1. 