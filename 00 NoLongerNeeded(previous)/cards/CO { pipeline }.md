---
aliases:
---
# pipeline
1. 讓 overlapped 的部分同時執行
2. 總執行時間相同，但是每個 stage 的 latency 變短，throughput 增加\
3. speedup 約等於 number of stages
# hazard
1. def : 下一個 clock 需要了，但是沒辦法
2. type
	1. data hazard
		1. 下一個指這個 data, 但是上一個指令還沒執行完，導致錯誤
		2. 解決方法
			1. bubble
			2. forwarding
				1. load-use 的 forwarding 仍然需要 bubble stall
			3. scheduling
				1. 如果沒有 data dependency 的問題，那就可以透過 re-ordering 的方式去減少 stall $\rightarrow$ 減少 clock cycle
	2. structural hazard
		1. 
	3. control hazard
		1. branch 需要時間運算
		2. 改善
			1. branch prediction
				1. 2 states
				2. 4 states