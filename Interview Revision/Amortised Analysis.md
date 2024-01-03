Amortised analysis established a worst case bound for the performance of an algorithm irrespective of the inputs. 

Amortised analysis averages the running times of operations in a sequence over that sequences.

Consider a dynamic array, that doubles in size when it is full and an element needs to be added.

If we started with a dynamic array size 4, we could push 4 elements onto it and each operation would take constant time. Yet pushing a fifth element onto that array would take linear time. 

In general if we consider an arbitrary number of pushes n+1 to an array of size n, we notice that push operations take constant time except for the last one which takes O(n) time to perform the size doubling operation. Since there were n+1 operations total we can take the average of this and find that pushing the elements onto the dynamic array takes: 
$$ \frac{n* O(1) + O(n)}{n+1} = O(1)$$
