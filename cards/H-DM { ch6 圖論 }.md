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
9. 