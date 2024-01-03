A function that translates keys to array indices is known as a hash function. The keys should be evenly distributed across the array via a decent hash function to reduce collision and ensure quick look up speeds.

Collision Resolution Techniques:

Open addressing: Collision are handle by looking for the following empty space in the table. If the first slot is taken, the hash function is applied to the subsequent spots until one is left empty. 

Separate Chaining: In chaining, a linked list of objects that hast to each slot in the hash table is present. Two keys are included in the linked list if they hash to the same slot. This method is rather simple to use and can manage several collisions.

Robin Hood hashing: To reduce the length of the chain, collisions in Robin Hood hashing are addressed by switching off keys. The algorithm compares the distance between the slot and the occupied slot of the two keys if a new key hashes to an already-occupied slot. The existing key gets swapped out with the new one if it is closer to its ideal slot. This bring the existing key closer to its ideal slot. This method has a tendency to cut down on collisions and average chain length. 

Dynamically Re-sizeable.

Load factor is the relation between the number of elements and the number of space left in the table. High load factors will have cluttered and longer search times/collisions. 