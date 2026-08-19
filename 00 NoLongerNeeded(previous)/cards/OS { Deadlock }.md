---
tags:
cssclasses:
  - ch8
---
1. thread must request the resource before using it, and must release resource after using it (request $\rightarrow$ use $\rightarrow$ release)
# deadlock characterization
1. neceesary conditions
	1. mutual exclusion
	2. hold and wait
	3. no preemption
	4. circular wait
2. 可以用 resource-allocation graph (direct graph) 表示 ![[Pasted image 20260303200704.png]]
3. 有 cycle 不一定會造成 deadlock
# method for handling deadlocks
1. pretent deadlocks never occur
2. prevent deadlocks : ensure at least one of necessary conditions cannot hold
3. avoid deadlocks : 
4. allow system to enter deadlocked state, detect it, and recover
# deadlock prevention
1. mutual exclusion
2. hold and wait
3. no preemption
4. circular wait
# deadlock avoidence
1. safe state ![[Pasted image 20260303204429.png]]
2. algo.
	1. resource allocation graph algo.
		1. claim edge
	2. Banker's algo.
		1. resource allocation graph algo. is not applicable to a resource allocation system with multiple instances of each resource type
		2. less efficient than resource-allocation graph
		3. term
			1. avaliable
			2. max
			3. allocation
			4. need = max - allocation
# deadlock detection
1. steps
	1. examine state 
	2. recover from state
2. wait-for graph (obtain from resource-allocation graph)
	1. remove resource nodes
	2. collapsing the appropriate edges
# recovery from deadlock
1. process and thread termination
2. resource preemption
	1. preempt some resources from processes and give some resources to other process until deadlock cycle is broken
3. 