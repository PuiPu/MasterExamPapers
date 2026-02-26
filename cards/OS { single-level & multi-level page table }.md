---
tags:
  - median-hard
---
|             | single-level | multi-level |
| ----------- | ------------ | ----------- |
| 需要連續大空間     | 需要           | 不需要         |
| sparse data | 不適合          | 適合          |
| TLB miss 成本 | 低            | 高           |
# single-level

# multi-level
1. 只有在 sparse 的情況會比較省 memory
	1. 所以 multi-level 不會永遠比 single-level 還省 memory
2. multi-level 的 TLB miss 會比較慢
	```
	1 次 access -> PTE
	1 次 access -> data
	```
	
	`