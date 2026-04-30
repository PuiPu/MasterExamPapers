---
cssclasses:
  - 2026.4.30
---

# 13.1 properties of red-black tree
1. balanced (解決 BST 有可能不是 balanced 導致 queueing 沒有在 O(h))
2. five properties
	1. every node is either red or black
	2. the root is black
	3. every leaf(NIL) is black
	4. if a node is red, then both its children are black
	5. for each node, all simple paths from the node to descendant leaves contain the same number of black nodes
3. bh(x) : black height of node x
	1. a node x down to a leaf (but not including $\rightarrow$ 如果 node x 是 black，在算 black height 的時候不用算 node x 進去)
# 13.2 rotations
1. 因為 insert & delete 會 violate the red-black property
	1. 需要 rotation 去維持 property
2. type
	1. right rotation (跟 left rotation symmetric)
	2. left rotation (我還是不知道 pseudo-code 是甚麼意思)
		1. left rotate 白話 : 把 right 的提起來，left 的放下去 ![[Pasted image 20260430194612.png]]
# 13.3 insertion
1. RB-INSERT(T, z) $\rightarrow$ 拿 BST 的 insert 去改
2. 最後需要 RB-INSERT-FIXUP(T, z)
	1. 預設插入的 node 是 red
	2. 這個蠻複雜的，看不懂 [Red Black Tree: Insert(新增資料)與Fixup(修正)](https://alrightchiu.github.io/SecondRound/red-black-tree-insertxin-zeng-zi-liao-yu-fixupxiu-zheng.html)
	3. cases (2026.4.30 難得看懂了)
		1. case 1 : z's uncle y is red
		2. case 2 : z's uncle y is black, z is right child
			1. 轉成 case 3 解決
		3. case 3 : z's uncle y is black, z is left child
3. textbook 的內容沒看，要再看
# 13.4 deletion
1. 十分複雜，看不懂 [Red Black Tree: Delete(刪除資料)與Fixup(修正)](http://alrightchiu.github.io/SecondRound/red-black-tree-deleteshan-chu-zi-liao-yu-fixupxiu-zheng.html)
2. cases
	1. case 1 : 
	2. case 2 : 
	3. case 3 : 
	4. case 4 : 
3. 先跳過