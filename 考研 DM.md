> 1. graph 很重要多加強
# 重點
1. logic
	1. tautlogy / contradiction
	2. predicate / quantifier
2. recursion
	1. solve
		1. method
			1. characteristic equation
			2. generating function
		2. Q :  C.E 跟 G.F 之間的關係 ?
			1. 
		3. 
			1. homogeneous
			2. non-homogeneous
3. function (多對一，不能一對多)
	1. injective funciton (單射，只能一對一)
		1. number of possibility :  
	2. surjective function (滿射，可多對一，但每個 y 都需要有 x 對應)
		1. number of possibility : 
	3. bijective function (1-1 & onto)
		1. number of possibility :
4. cryptosystem
	1. foundation
		1. prime number
			1. implement : large number mod prime number
				1. Fermat's Little theorem
					1. $a^p $
	2. solve congruence  $a \equiv b \: (mod \: m)$
	3. RSA
		1. 
5. graph
	1. terminology
		1. trail
		2. path
		3. cycle
	2. vertex coloring
		1. def : coloring vertices, adjacent vertices has different coloring
		2. chromatic number $\chi(x)$
			1. minimum number of color
		3. k-coloring
		4. example
			1. bipartite graph : $\chi(x)=2$
			2. complete graph : $\chi(K_n) = n$ , 因為每個 vertex 都跟其他 n-1 個 connected，所以必須是 n
	3. path problem
		1. eulerian
			1. eulerain circuit (一筆畫問題)
				1. each vertices has even degree (1 in, 1 out)
		2. hamiltonian [Hamiltonian Cycles, Graphs, and Paths | Hamilton Cycles, Graph Theory](https://youtu.be/2UczS2hQLsI?si=v7I4L5jxr4FDevir)
			1. hamiltonian cycle
			2. hamiltonain path
	4. isomorphism
		1. def : can find 1-1 & coressponding function of vertices
	5. planar graph
		- vid : [What are Planar Graphs? | Graph Theory](https://youtu.be/LSkB6jR44aE?si=aXZF3fXcMFzjELZ-)
		1. def : 沒有 crossing edges 的 graph
		2. 重要性值 Euler formula : $e + v - f = 2, where \:e \: is \:\#deges, \:v \:is \:\#vertices, \:f \:is \:\#faces(regions)$
	6. perfect matching