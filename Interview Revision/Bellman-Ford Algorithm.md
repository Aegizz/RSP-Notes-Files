Single Source Shortest Path (SSSP) algorithm.

BF is not ideal for most SSSP problem because it has a time complexity of O(EV).

BF is useful for when the graph has negative edge weights, because Dijkstra's can infinitely loop. 

Negative Cycles
![[Pasted image 20240103142947.png]]
E.g. Negative self loop will loop and then reduce the length infinitely. 
![[Pasted image 20240103143615.png]]
This graph creates a negative cycle that reduces the distance travelled, and thus will be looped infinitely. 

1. Set all nodes as unvisited and distance to infinite, except for starting node which is S.
2. Loop through the list nodes in order, and check if the adjacent nodes have a smaller distance + distance to travel to the current node. For example, ![[Pasted image 20240103145402.png]]
3. Repeat this step V - 1 times unless the table does not change after an iteration (Where V is the number of vertices).