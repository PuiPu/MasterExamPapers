---
cssclasses:
---
# 6-1 圖的種類及術語
![[Pasted image 20260306212656.png]] ![[Pasted image 20260306213618.png]]
1. graph G = (V, E), V is vertices set, E is edges set
2. type
	1. directed graph (diagraph)
	2. undirected graph
3. subgraph
	1. induced subgraph
4. sequence of edges/vertices
	1. path : $x_1, x_2 \cdots x_{n-1}$ (以 vertice 為觀點)
	2. trail : $e_1, e_2 \cdots e_n$ (以 edges 為觀點)
	3. circuit : begins and ends at the same vertex, said u=v, and length greater than 0
5. simple graph
	1. path or circuit not contain same edge more than once (以 edges 為觀點)
6. connected
	1. def : there is a path between every pair of distinct vertices of the graph
7. connected component
	1. def : maximal connected subgraph of G
8. cut
	1. cut vertices (articulation points) : removal from a graph of a vertex and all incident edges produces a subgraph with `more` connected component
	2. cut edge(bridge) : edge removal produce a graph with `more` connected component
# 6-2 圖形表示法語同構
1. 表示法
	1. adjacency matrix
	2. adjacency list
	3. incidence matrix (edge 觀點)
2. isormorphic ![[Pasted image 20260310163155.png]]
	1. graph invariant
		1. have same number of vertices
		2. have same number of edges
		3. a vertex v of degree d in G must correspond to a vertex f(v) of degree d in H (因為如果 vertex w in G is adjacent to v iff f(v) and f(w) are adjacent in H)
	2. 判斷 not isomorphic 比起判斷 isomorphic 更簡單，只要任何一項 graph invariant 不符合，就不同構
	3. 補圖同構 : $G_1 \cong  G_2 \Leftrightarrow \bar{G_1} \cong \bar{G_2}$ , both $G_1, G_2$ are loop-free undirected graph (可以用在補圖很簡單的 case)
	4. 