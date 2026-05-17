---
cssclasses:
  - 2026.5.16
---
# 24.1 flow networks
![[Pasted image 20260516232139.png]] ![[Pasted image 20260516235323.png]]

# 24.2 ford-fulkerson method
> key ideas : residual, augmenting paths , cuts
![[Pasted image 20260516231708.png]]
白話 : 在 residual network 找到一條 augmenting path(液體可以從 source 流到 sink 的一個 path)，然後在沿路 vertices 間增加(augment) flow 大小，直到找不到 augmenting path
## residual network
- residual capacity $c_f(u,v)$ , capacity c, flow f ![[Pasted image 20260516231826.png]]
## augmenting path
![[Pasted image 20260516234611.png]]
- simple path from s to t in residual network $G_f$
- residual capacity of p (smallest capacity on this path , ex. figure 24.2 的在 path p 最小的 capacity 是 $c_f(v_2,v_3)$ ) ![[Pasted image 20260516234355.png]]
## cut of flow networks


# 24.3 maximum bipartite matching
