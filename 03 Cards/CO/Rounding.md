---
type: card
subject: CO
chapter:
status: red
parent: "[[Floating_Point]]"
---

# Untitled

## 核心
- guard/round bit
	- 0-49: 不進位
	- 50-99: 進位
- ulp(units in the last place) #unknown 
	- 這是啥
- round to nearest even
	- 最低有效位數
		- 奇數，進位
		- 偶數，保留
	- MIPS 只支援這種
	- sticky bit

## 我容易錯
- sticky bit 的意思 = round bit 右邊只要有非零位元，就要被 set
	- = round bit 右邊所有 bit 做 XOR，只要有出現一個非零，S=1

## 延伸
-
