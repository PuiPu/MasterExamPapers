---
tags:
  - important
---
# basic concept
1. job scheduling for multi-programmed operating system is important，我們想要 maximize CPU utilization
2. ready queue 不一定是 FIFO queue 來實作，有可能是 priority queue, tree, unordered linked list
3. process execution 包含 CPU execution (CPU burst) & I/O wait (I/O burst)，process alternate between two states
4. records in queue are generally `Process Control Blocks (PCBs)`
5. preemptive and non-preemptive schdeuling
	1. 定義 ?
6. cpu
	1. CPU scheduler
	2. dispatcher
# scheduling criteria
1. cpu utilization
2. throughput : number of process per time unit
3. turnaround time : sum of periods spent waiting in the ready queue, executing on CPU, doing I/O
4. waiting time : sum of periods spent waiting in the ready queue
5. response time :  
# scheduling algorithms
1. First-Come, First-Served (FCFS)
	1. convey effect : other processes wait for one big-process to get-off CPU
2. Shortest-Job-First (SJF)
	1. type
		1. preemptive (called shortest-remaining-time-firs scheduling)
		2. nonpreemptive
	2. 儘管 SJF 是 optimal，但是我們無法 know length of next CPU burst。所以，我們可以 `approximate` SJF scheduling $\rightarrow$ exponential average $\tau_{n+1} = \alpha t_n + (1-\alpha)\tau_n$
3. Round-Robin
	1. 跟 FCFS 很像，但是加上 time quantum (time slice)，一樣用 FIFO queue
4. priority
	1. SJF 是 special case of general priority scheduling
	2. type
		1. preemptive
		2. nonpreemptive
	3. major problem
		1. starvation (indefinitn blocking)
			1. high-priority process prevent low-priority process from getting into CPU
		2. solution
			1. aging
5. multi-level queue scheduling
6. multi-level feedback queue scheduling
# thread scheduling
1. user-level $\leftrightarrow$ kernel-level threads
2. contention scope ?
	1. process contention scope (PCS)
	2. system contention scope (SCS)
# multi-process scheduling
1. multi-process (referred to system provide multiple physical processors)
	1. asymmetric multiprocessing
	2. symmetric multiprocessing (SMP)
		1. each processors self scheduling
		2. two strategies ![[Pasted image 20260302152151.png]]
2. multi-core processors
	1. each core maintain its architectural state
	2. memory stall : processor access memory, it spends a significant amount of time waiting for the data
3. load balancing
	1. SMP system
	2. general approach
		1. push migration : periodically check load on each processor, 如果發現 imbalance, 就分配 loads 到其它 idle or less-busy processors
		2. pull migration : idle processors pull a waiting task from busy processor
4. proceesor affinity
	1. 避免 migrating a thread from one processor to another ![[Pasted image 20260302154912.png]]
	2. type
		1. soft affinit
		2. hard affinit
# real-time scheduling
1. system type
	1. soft real-time system
	2. hard real-time system
2. two type latency affect performance for real-time system : (1) interrupt latency (2) dispatch latency
3. priority-based scheduling
4. rate-monotic scheduling
5. earliest-deadline-first scheduling (EDF)
6. proportional share scheduling
# OS example
1. linux
	1. Complete Fair Schedular (CFS)
2. windows
	1. foreground / background
3. Solaris
	1. six classes with different priorities & different scheduling alog.
4. 