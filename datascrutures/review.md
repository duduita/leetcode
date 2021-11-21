**map**
- implementation: BST (like red-black)
- search time: log(n)
- insertion and deletion: log(n) + rebalance
- useful for ordered data
- erase more than 1 element
  
**unordered_map**
- implementation: hash table
- search time: O(1) average ... O(n) worst case
- insertion and deletion: O(1) average ... O(n) worst case
- you need to keep count of some data
- no ordering is required

**unordered_set**
- similar to unordered_map, but without (k, v)
- erase only one element
  
**set**
- similar to map, but without (k, v)

**multiset**
- sorted order
- multiple elements
- erase more than 1 element

**unordered_multiset**
- duplicates can be stored
- erase only one element

