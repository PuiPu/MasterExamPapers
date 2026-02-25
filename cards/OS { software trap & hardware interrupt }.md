---
tags:
---
|         | hardware interrupt | software trap           |
| ------- | ------------------ | ----------------------- |
| source  | extenal device     | instruction itself      |
| 同步性     | asynchronous       | synchronous             |
| 可否 mask | yes                | no                      |
| example | timer, disk I/O    | page fault, system call |
# software trap
1. interrupt mask : 不想要 interrupt 用 mask 取消掉
	1. IF (Interrupt Flag) 只能 mask hardware interrupt
	2. IF 不能 mask  trap(divide-by-zero , page fault)，不然會導致 system 崩潰
2. software trap 不一定代表 errorneous
3. system call 本身就是 trap instruction，而且 system call 是合法行為



 
# hardware trap