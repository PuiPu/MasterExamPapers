---
type: card
subject: CO
chapter:
status: red
parent: "[[CO]]"
---

# Representation

## 核心
- biased notation
- range ![[94294.jpg]]
	- normalized
	- de-normalized
- biased-notation
	
## 我容易錯
- significant 為 X.XX... (整數 + 小數點)
- single precision $\rightarrow$ 32-bit
	- (S, E, F) = (1, 8, 23)
- double precision $\rightarrow$ 64-bit
	- (S, E, F) = (1, 11, 52)
- smallest
	- normalized : #unknown 
	- denormalized : $0.00...01 \times 2^{-126}$ #unknown 
- bias notation : 讓正負 exponent 都可以用 unsigned number 表示

## 延伸
- 
---
# Arithmetic

## 核心
- 

## 我容易錯
- 兩個 floating point 相加，是要先把指數換成比較大的那個
	- 正數: +10, +1 $\rightarrow$ 換成 +10
	- 負數: -10, -1 $\rightarrow$ 換成 -1
- 

## 延伸
- 
---
# Rounding

## 核心
- guard/round bit #easy 
	- 0-49: 不進位
	- 50-99: 進位
- sticky bit
	- 
- ulp(units in the last place) #unknown 
	- 
- round to nearest even
	- 最低有效位數
		- 奇數，進位
		- 偶數，保留
	- MIPS 只支援這種
- 

## 我容易錯
- sticky bit 的意思 = round bit 右邊只要有非零位元，就要被 set
	- round bit 右邊所有 bit 做 `OR`(===不是 XOR ===)，只要有出現一個非零，S=1
	- ```
	  0.1100000001000000...
	  -.--| .................
	    GR      sticky bit
	  3-significant
	  ```
- 

## 延伸
- 