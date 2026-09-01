---
type: card
subject: CO
chapter: Memory
status: yellow
parent: "[[CO]]"
---

# Basic

## 核心
- Temporal locality
- Spatial locality
- Hit / Miss

## 我容易錯
- 

## 延伸
- Cache Mapping
- Cache Miss
- AMAT
---
# Miss

## 核心
- 3C model
	- compulsory miss
	- capacity miss
	- conflict miss

## 我容易錯
- block size $\uparrow$
	- compulsory miss $\downarrow$ (搬到 cache 的 data 變多，spatial locality $\uparrow$)
	- spatial locality $\uparrow$ (program 通常會 access neighbor)
	- miss penalty $\uparrow$ (miss一次，需要搬到 cache 的 data 變多，花更常的時間)
	- miss rate $\downarrow$ (在 reasonable 範圍。cache size 固定，增加 block size 會減少 number of block，反而造成 competition，miss rate 上升)
	- \# blocks $\downarrow$ (cache size 固定)
	- ![[Pasted image 20260828224256.png]]

## 延伸
-