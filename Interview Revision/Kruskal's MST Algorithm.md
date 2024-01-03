A minimum spanning tree or minimum weight spanning tree for a weighted, connected, undirected graph is a spanning tree, with a weight less than or equal to the weight of every other tree.

Is greedy.

1. Sort all edge in non-decreasing order of their weight.
2.  Pick the smallest edge. Check if it forms a cycle with the spanning tree so far. If the cycle is not formed include this edge. Else, discard it.
3. Repeat step#2 until they are V-1 edge in the spanning tree.

Union Find to detect Cycle in Graph.
Create a disjoint set for each vertex in the graph.
For each edge (u,v) in the graph find the root of the sets containing u and v.
If the roots are the same there is a cycle. 