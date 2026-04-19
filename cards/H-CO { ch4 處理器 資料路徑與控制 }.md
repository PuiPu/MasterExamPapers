---
cssclasses:
---
1. 處理器是由 (1) data path (2) control unit (指揮 data 去哪) 組成的
2. 處理器的 type
	1. single clock cycle
	2. multi clock cycle

|     | single-clock cycle | multi-clock cycle               |
| --- | ------------------ | ------------------------------- |
| 優點  | 一次由一個              |                                 |
| 缺點  |                    | 由最長的 instruction 決定 clock cycle |
# 建構順序
## data path
1. 了解各個 component
	1. register file (register 的 set)
	2. ALU
	3. Data memory
	4. instruction memory
	5. adder
	6. sign extension
	7. program counter
2. instruction fetch
	1. Component : PC (Program Counter)、adder、instruction memory
3. R-type
	1. Component : register file、ALU
4. load word
	1. Component : register file、ALU、sign extension、data memory
5. store word
	1. Component : register file、ALU、sign extension、data memory
6. branch on equal
	1. Component : 
7. 合併 R-type
## 加上 control unit
1. type
	1. control
	2. ALU control
		1. 
# single clock cycle 效能
1. 由最長的決定 (critical path)
2. instruction
	1. R-type
	2. Load word
	3. Store word
	4. Branch
	5. Jump