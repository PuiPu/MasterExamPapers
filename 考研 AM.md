# hash
1. form : (key , value) pair
2. method
	1. division method : $k \: mod \: m$
	2. multiplication method
	3. ...
3. open addressing
	1. double hashing 
		1. $h(k,i) = (h_1(k) + ih_2(k)) \: mod \: m$
	2. linear probing (general case of doubling hashing)
		1. $h(k,i) = (h_1(k)+i) \: mod \: m$
4. bloom filter [探索緩存穿透的極速密碼 — Bloom Filter: **正面對決緩存穿透! 如何極速、有效地應對？**](https://medium.com/@hohshencode/%E9%9D%A2%E5%B0%8D%E7%B7%A9%E5%AD%98%E7%A9%BF%E9%80%8F%E6%8C%91%E6%88%B0-%E5%A6%82%E4%BD%95%E6%A5%B5%E9%80%9F-%E6%9C%89%E6%95%88%E5%9C%B0%E6%87%89%E5%B0%8D-%E6%8E%A2%E7%B4%A2%E7%B7%A9%E5%AD%98%E7%A9%BF%E9%80%8F%E7%9A%84%E6%A5%B5%E9%80%9F%E5%AF%86%E7%A2%BC-bloom-filter-54bf03713a63)
	1. 目的 : 確認不存在
5. 