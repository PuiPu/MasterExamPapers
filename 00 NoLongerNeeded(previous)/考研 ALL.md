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
			2. hash table
	2. problem and why ?
		1. CO : memory 的 temporaru
3. AM : how to solve algo. ?
	1. sequence of operation : process
		1. CO : abstract function
	2. 需要在一個實體的 machine 上執行
		1. DM : concept "Turing machine" (ithe)
		2. AM : RAM model
		3. CO : MIPS dataflow
			1. approve : pipeline (increase throughput)
		4. Von-Neumann architecture
			1. processor $\Longleftrightarrow$ data
			2. Q : 基於 Von-Neumann arch. 衍生的問題
				1. CO : processor 跟 memory 之間的 latency 需要降低
					1. CO : cache
						1. memory hierarchy (smaller/faster/expensive) $\Longleftrightarrow$ (larger/slower/cheap)
				2. OS : 在 multi-thread/process 的問題會有 data 
					1. OS : shared memory 
4. OS : 有了基本的 computing unit，那需要更複雜的指令/操作，需要再增加一層 abstract level，也就是 OS
	1. OS 定義 ?
	2. OS 的好處與目的
		1. user/kernel space 分開的目的 ? (HINT: security ...)
		2. 允許 multi-process 的情況發生
			1. OS : multi-process
				1. one/multi user thread to one/multi kernel thread model
				2. 因為有 multi-process，所以需要有一個 dispatcher 去分配
					1. process scheduling scheme
						1. round robin
				3. Q : concurrency
					1. critical section : 一次最多只能有一個人使用
						1. spin-lock
						2. mutex lock (paticular case of semaphore)
						3. semaphore
					2. Q : deadlock
	3. OS 包含 file system 去儲存非即時計算的 data
		1. form
			1. inode ...
		2. file system
			1. 
5. OS : single cpu 不能有效的解決 Graphic , AI 的問題
	1. OS : GPU parallelism
	2. LA : matrix (multi-input(vector) as a matrix)
		1. inverse matrix
			1. by definition
				1. $AB = BA = I$
				2. by cofactor / adjoint 
		2. vector space (like coordinate system)
			1. subspace
			2. 4 elementary space
			3. basis
				1. def : (1) span vector space (2) linear independent
				2. change basis
		3. linear transform
		4. eigen value/vector
			1. method
				1. $det(A-\lambda I) = 0$
			2. diagonalization
			3. SVD
		5. orthogonal
			1. Gram-Schmidt process
# graph
1. AM : tree 是 acyclic graph
2. traversal
	1. BFS(Breath-First Search)、DFS(Depth-First Search)
# hash
1. DS : hash insert / delete / search 在 O(1)
2. DM : mathematical theorem
	1. type : 1-1, onto, bijection
	2. prime number (cryptosystem)
		1. solve congruence
			1. Fermat's Little theorem $a^{p-1} \equiv 1 (mod \: p)\:,\: gcd(a,p)=1$
				1. large number (ex. tower exponent)
		2. RSA
	3. 
3. AM : naive 的 $mod \: m$ 解決不了大量資料 collision 頻繁的問題
	1. hash family
		1. perfect hash
		2. ...
	2. type
		1. open address [Day21 -- Time and Space Tradeoff - Hashing](https://ithelp.ithome.com.tw/articles/10245793)
			1. double hashing
			2. linear probing
4. OS : 記憶體不連續 (internal / external fractr)
	1. AM : linear probing 就會連續 ?
5. OS : paging 問題
6. CO : 