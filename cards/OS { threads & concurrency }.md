---
tags:
cssclasses:
  - ch4
---
- single-thread v.s. multi-thread ![[Pasted image 20260303212920.png]]
- data parallelism v.s. task parallelism ![[Pasted image 20260303215416.png]]
- Q : concurrent 跟 parallelsim 的差別 ?
# multi-threading model
1. level ![[Pasted image 20260303215538.png]]
	1. user thread
	2. kernel thread
2. relationship 
	1. one-to-one
	2. many-to-many ![[Pasted image 20260303220038.png]]
	3. two-level model (variation for many-to-many) ![[Pasted image 20260303220253.png]]
# thread libraries
1. provode API creating and managing threads
2. two ways to implement
	1. provide a library entirely in user space with no kernel support
	2. implement kernel-level library
3. 3 main thread libraries
	1. POSIX thread : either user-level or kernel-level
	2. Windows : kernel-level library
	3. Java : JVM host operating system (windows, unix, linux, macOS)
4. strategy
	1. asynchronous threading
		1. once parent create a child thread, parent resume its creation, so parent and child execute concurently and indepently
		2. little data shring
	2. sychronous threading
		1. parent create one or more children
		2. parent must wait for all children to determine before it resumes
		3. once each threads terminated, join with its parent
		4. significant data sharing among threads
# implict threading
1. thread pooling