Red black trees are self-balancing binary search tree. 


O(log n)- insertion, deletion and searching. It has good efficient worst case running time complexity.

Root is black.

Every null child is black.

The children of a red node are black.

All the leaves have the same black depth

Every simple path root to descendant contain the same number of black nodes.

There are no two adjacent red nodes.

Red-black trees are better for frequent insertions and deletions on average.

1. A node is red or black
2. The root and leaves (NIL) are black.
3. If a node is red then its children are black.
4. All paths from a node to its NIL descendants contain the same amount of black nodes.

DONT COUNT STARTING NODE

Storage bit for color.
Shortest path is no more than half the longest path.
Shortest all black nodes, Longest path alternating nodes.

