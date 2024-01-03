A trie is a mult-iway tree data structure used for storing string over an alphabet. It is used to store a large amount of string. The pattern matching can be done efficiently using tries. A trie is also known as a digital tree or a prefix tree.

It stems from an empty root node, which branches into the first letter, which can then branch into the second letter and so on until the key is found or at the isEndOfWord boolean.

E.g. A terminal node has no children. 

Search O(n)
Insert O(n)
Delete O(n)

Tries are searched using common prefixes so it can be faster. The lookup depends upon the height in the case of a binary search tree.

Tries take less space when they contain a large number of short strings. As nodes are shared between the keys.

Tries help with longest prefix matching.


