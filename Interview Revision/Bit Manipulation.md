Bitwise AND (&)
Bitwise OR (|)
Bitwise XOR (^)
Bitwise NOT (!)

"<<" is a left shift operator
">>" is a right shift operator


```c++
//Function to get bit at the ith position
bool getBit(int num, int i){
	return ((num & (1 << i)) != 0)
}
```

Let num = 1010

let i = 0001 (e.g. position 1)

0001 << 0001 = 0010

0010 & 1010 = 0010 (!= 0)
 = 1

____________________
if num = 0101

0101 & 0010 = 0000
 = 0


