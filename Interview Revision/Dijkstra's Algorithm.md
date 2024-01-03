Dijkstra's Algorithm

O((E+V)log(V))

Class: Search Algorithm, Greedy Algorithm, Dynamic Programming

A search algorithm is an algorithm designed to solve a "search problem". Search problem is a type of computational problem represented by binary relation. E.g. finding structure y in object x. 

Greedy algorithm is an algorithm that uses the heuristic of making the most optimal choice at each stage. 

Dynamic Programming is the act of simplifying a complicated problem by breaking it down into simpler sub-problems in a recursive manor.

Dijkstra's fixes a singular node as a source node and finds the shortest path to all other nodes in the graph producing a shortest path tree.

Other Dijkstra's finds the shortest path between two given nodes.

Let the starting node be called the initial node. Let the distance of node Y be the distance from the initial node to Y. Dijkstra's algorithm will initially start with infinite distances and will try to improve them step by step.

1. Mark all nodes unvisited. Make a set of all nodes unvisited.
2.  Assign to every node a tentative distance value: Zero for initial node. The tentative distance of a node v is the length of the shortest path discovered so far between node v and the starting node. Since initially no path is known to any vertex than the source itself all other tentative distances are initially set to infinity. Set initial node as current
3.  For the current node consider all of its unvisited neighbours and calculate their tentative distances through the current node. Compare the newly calculated tentative distances to the one currently assigned to the neighbour and assign it the smaller one. 
4. When we are done considering all of the unvisited neighbours of the current node, mark the current node as visited and remove it from the unvisited set.
5. If the destination node has been marked visited (when planning a route between two specific nodes) or if the smallest tentative distance among the nodes in the unvisited nodes is infinity then stop.
6. Otherwise, select the unvisited node that is marked with the smallest tentative distance set it as the new current node then go back to step 3.

![[Pasted image 20240103141910.png]]
