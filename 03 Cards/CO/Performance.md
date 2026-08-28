---
type: card
subject: CO
chapter:
status: red
parent: "[[CO]]"
---

# Power

## 核心
- power = static/leakage power(維持基本運作需要的電量) + dynamic power(做額外 operation 需要的電量 ex. update screen, run programming)
- 
## 我容易錯
- CPU 會轉成 multi-core，是因為 power wall (dynami power ) 的問題，不能再用提高 clock freq 去達到更高的 performace
	- 所以，用 parallel 的 multi-core 去解決
## 延伸
- 
---
# Performance
## 核心
- metric
	- CPU time = IC * CPI * Clock cycle time 
	- MIPS(Million Instruction of Instruction)
## 我容易錯
- 真正能決定 CPU performance 的不是單看 IC(program 的 instruction 多不多)、CPI(單一 Instruction 強不強 ex. RISC/CISC)、Clock cycle time(CPU 的頻率(clock rate) 大不大)
	- 而是，IC & CPU & Clock cycle time 一起看
## 延伸
- 
