# Big Picture
1. AM : algo. 的定義
	1. input / output
	2. specific ...
2. DS : 需要 data structure 去 store data
	1. type
		1. continuous
			1. array
				1. implement
			2. 
		2. non-continuous
			1. linked list
				1. implement
					1. array
					2. tree
					3. graph (adjoint list)
					4. matrix
					5. 
			2. hash map
	2. problem and why ?
		1. CO : memory 的 temporaru
3. AM : how to solve algo. ?
	1. sequence of operation
	2. 需要在一個實體的 machine 上執行
		1. DM : concept "Turing machine" (ithe)
		2. CO : MIPS dataflow
			1. approve : pipeline (increase throughput)
		3. Von-Neumann architecture
			1. processor $\Longleftrightarrow$ data
			2. Q : 基於 Von-Neumann arch. 衍生的問題
				1. CO : processor 跟 memory 之間的 latency 需要降低
				2. OS : 在 multi-thread/process 的問題會有 data 
					1. OS : shared memory 
4. OS : 有了基本的 computing unit，那需要更複雜的指令/操作，需要再增加一層 abstract level，也就是 OS
	1. OS 定義 ?
	2. OS 的好處與目的
		1. user/kernel space 分開的目的 ? (HINT: security ...)
		2. 允許 multi-process 的情況發生
			1. OS : multi-process
				1. one/multi user thread to one/multi kernel thread model
				2. Q : concurrency
					1. critical section : 一次最多只能有一個人使用
						1. spin-lock
						2. mutex lock (paticular case of semaphore)
						3. semaphore
					2. Q : deadlock
5. OS : single cpu 不能有效的解決 Grphic , AI 的問題
	1. OS : GPU
	2. LA : matrix
# hash
1. DS : hash insert / delete / search 在 O(1)
2. DM : hash function
	1. type : 1-1, onto, bijection
	2. prime number (cryto)
		1. solve congurance : Fermat's Little theorem
		2. RSA
	3. 
3. AM : naive 的 $mod \: m$ 解決不了大量資料 collision 頻繁的問題
	1. hash family
		1. perfect hash
		2. ...
	2. type
		1. double hashing
		2. linear probing
4. OS : 記憶體不連續 (internal / external fractr)
	1. AM : linear probing 就會連續 ?
5. OS : paging 問題
6. CO : 