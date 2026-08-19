# 考研重點
1. data hazard
2. memory / cache 
3. 


# memory
## memory hierachy
1. 因為 temoral locality (time) & spatil locality (space) 的問題，所以 memory 需要 memory hierachy(spatial locality) 來分配 ![[Pasted image 20260202165109.png]]
2. cache 的最小單位是一個 block (or line)，每次更新都是一個 line
3. cache 的目的是為了讓 CPU 減少到 memory 的 latency (因為 memory hierachy，所以 cache 的讀取 time 會更短)
## mapping
1. type [Cache的基本原理](https://zhuanlan.zhihu.com/p/102293437)
	1. direct mapping
	2. fully associative
	3. n-way associative