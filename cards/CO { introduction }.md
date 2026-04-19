---
cssclasses:
---
(以下是 計算機結構 老師介紹)
![[Pasted image 20260309174056.png]]
1. Moore's law (積體電路上可容納的電晶體數目，每兩年會增加 1 倍)，已經失效了
2. 轉向 multi-processor 發展 : 單一 processor 的效能提升不大了
3. 結果 multi-processor 還要繼續增加效能 ( Instruction Level Parallelism (ILP) ) $\rightarrow$ Thread Level Parallelism (TLP) & Data Level Parallelism (DLP)
	1. ILP : 由 hardware 跟 compiler 決定，programmer 不用注意
	2. TLP & DLP : explict parallel, 需要 programmer to write parallel code to gain performance