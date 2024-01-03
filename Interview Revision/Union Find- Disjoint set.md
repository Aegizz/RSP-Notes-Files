A data structure that stores non overlapping or disjoint subsets of elements is called disjoint set data structure.

Operations:
Add new set
Merging sets (Union)
Finding representatives (Find)
Check if two sets are disjoint or not

Contains an array Parent[]:
The ith element of the Parent[] array is the parent of the ith item.

Contains a Tree: It is a disjoint set, if two elements are in the same tree, they are in the same set, the root node or topmost node is called the representative of the set. There is always a unique representative of each set.

Representatives are parent's of themselves/have no parents.


1. Find
```c++
int find(int i){
	if (parent[i] == i){
		return i;
	} else {
		return find(parent[i]);
	}
}
```
2. Union
Union takes two elements as input and finds the representatives of their sets using find. and finally puts either one of the trees under the root of the other tree. 

O(n) without path compression.

Union by Rank
Union by Rank considers the height of the trees (e.g. the amount of node parent calls to the root. )
If rank left is less than rank of right move left under right. 
Uses array Rank[] to store/peek the rank of the set/tree
O(log n) without Path Compression

Union by Size
Size is the number of elements in the tree or set, uses an array Size[] to store/peek it.
If the size of left is less than the size of right, its best to move left under right. 
O(log n) without Path Compression


Path Compression:
Path compression speeds up the data structure by compressing the height, this is done by caching the parent in the find operation and thus placing it back into the parent array. This enables a time complexity of O(log n) on average. 

With Union by Rank and Path Compression, amortised time complexity is $$O(\alpha(n))$$ 