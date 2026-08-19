---
cssclasses:
---
# 數的表示方式
1. floating number
2. integer
	1. unsigned
	2. signed
		1. sign & magnitude
			1. (1, 0) = (negative, positive)
		2. 1's complement
			1. 每個 bit : (1,0) $\rightarrow$ (0, 1)
		3. 2's complement
			1. $x + \bar{x} = -1$
			2. $-x = \bar{x} +１$
3. 二進位轉十進位
	1. ex. 16-bit 
		1. $x_{15}x_{14} ... x_{0}$
		2. $x_{15} \cdot (-2^{15}) + x_{14} \cdot 2^{14} + \cdots + x_{0} \cdot 2^{0}$
4. sign extension
	1. positive : 最高位數補 0 直到想要的位數
		1. ex. $(0000\:1000\:0111\:0000)_8$ $\rightarrow$ $(0000\:0000\:0000\:0000\: 0000\:1000\:0111\:0000)_{16}$
	2. negative : 最高位數補 1 直到想要的位數
		1. ex. $(0000\:1000\:0111\:0000)_8$ $\rightarrow$ $(1111\:1111\:1111\:1111\: 0000\:1000\:0111\:0000)_{16}$
# 加法減法
1. 