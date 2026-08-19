---
cssclasses:
  - ch6
---
# background
1. bound buffer
	```c
	/* producer */
	while (true) {
		// produce an item in next_produced
		
		while (count == BUFFER_SIZE)
		; // do nothing
		
		buffer[in] = next_produced;
		in = (in + 1) % BUFFER_SIZE;
		count++;
	}
	
	/* consumer */
	while (true) {
		while (count == 0)
		; // do nothing
		
		next_consumed = buffer[out];
		out = (out + 1) % BUFFER_SIZE;
		count--;
		
		// consume item in next_consumed
	}
	```
1. race condition
	1. several processes aceess and manipulate the same data concurrently and the outcome of the execution depends on the particular order
# critical section problem
![[Pasted image 20260312205658.png]]
1. soluton requirements (如果要證明是對的，必須同時符合這三項)
	1. mutual exclusion
	2. progress
	3. bound waiting
2. general approaches to handle critical section problem in OS
	1. preemptive kernels (more responsive)
	2. nonpreemptive kernels (suitable for real-time programming)
# Peterson's solution
![[Pasted image 20260312210815.png]]
1. 
# hardware support for synchronization
1. memory barriers
	1. strong ordered : memory modification on one process is immediately visible to all others processor
	2. weakly ordered : modifications to memory on one processors may not be immediately visible to other processors
2. hardware instructions
	1. OS provide special hardware instructions that allow us either to test and modify the content of word
	2. test_and_set() ![[Pasted image 20260313172112.png]] ![[Pasted image 20260313172132.png]]
	3. compare_and_swap() ![[Pasted image 20260313173200.png]] ![[Pasted image 20260313193501.png]]
3. atomic variables
	1. 
# mutex locks
# semaphores
# 