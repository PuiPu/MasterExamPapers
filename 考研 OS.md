# 重點
1. 為什麼需要區分 logical / physical memory ? 目的在哪 ?
2. paging 的目的是要解決什麼問題 ? paging scheme 有哪些 ?
3. translation between logical / physical memory 的 TLB(Translation Look-aside Buffer) 是為了解決什麼問題 ?
4. trashing 是甚麼?

# key
1. CPU sceduling
	1. terminolgy
		1. 
	2. type
		1. round robin
2. memory
	1. linking
		1. dynamic linking
		2. static linking
	2. dynamic storage allocation (first fit & best fit better than worst fit)
		1. first fit : 填入第一個 (big enough)
		2. best fit : 填入最小的，剩下 smallest leftover hole
		3. worst fit : 填入最大的，剩下 largest leftover hole
	3. fragmentation
		1. external fragmentation (not contiguous)
			1. reduce external fragmentation : compaction
		2. internal fragmentation (allocated memory slightly larger than requested memory)
	4. paging
		1. problem need to fix
			1. physical address space of a process can be non-contiguous -> avoid external fragmentation
			2. avoid problem of varing sized memory chunks
		2. terminology
			1. frame : divide `physical` memory into fixed-size blocks
			2. page : divide `logical` memory into blocks of same size
			3. page table : translate `logical` to `physical` address
		3. type
3. virtual memory
	1. goal
	2. page replacement algo.
		1. First-In-First-Out (FIFO) algo.
			1. 增加 frame 的數量會增加 page faults 的例外 -> Belady's anomaly
		2. optimal algo. (看未來)
		3. LRU algo. (看過去)
			1. implement method
				1. counter implementation (挑頻率最小的就可以了)
				2. stack implementation (doubly-linked list)
	3. page buffer algo.
		1. //
4. file system
	1. 