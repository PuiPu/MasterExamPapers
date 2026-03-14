---
tags:
TB: p.399
cssclasses:
  - ch10
---
[Copy-on-Write](https://hackmd.io/@pipibear/B1jl4GR_p)
# paging
1. demand paging
	1. 要用的時候再 load 到 main memory 裡
	2. implement required : (1) frame allocation algorithm (2) page replacement algorithm
2. copy-on-write (COW)
3. page replacement
	1. FIFO page replacement
	2. Belady's anomaly ![[Pasted image 20260226192455.png]]
		1. page-fault increase as the number of allocated frames increases
	3. optimal page replacement
		1. require future knowledge 
	4. Least Rencently Used (LRU)
		1. not been used for the longest period of time
		2. method
			1. counter
			2. stack
		3. won't suffer from Belady's anomaly
	5. couting-based page replacement
		1. least frequently used (LFU)
		2. most frequently used (MFU)
	6. page-buffering algo.
		1. keep a pool of free frames
# allocation of frames
1. type
	1. global replacement
	2. local replacement
2. non-uniform memory access (NUMA)
# trashing
1. definition : process is trashing if it is spending more time paging than execution
# memory compression
1. rather than paging, compress several frames into a single frame
2. 