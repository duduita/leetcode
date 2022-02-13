**Search in Rotated Sorted Array**
- check if target is in a non-rotated array
  - in this case, check if the target is in that

**Search Matrix**
- binary search na coluna
- binary search na linha
- l < r && r = mid

**Find Minimum in Rotated Sorted Array**
- we need to find the non-rotated part of the array, because we need to look for the inflection point.

**3Sum**
- pivot, and two sum
- use dups optimization (need review)  

**Find All Anagrams in a String**
- sliding window (comparing smap and pmap)
- edge case (need review)
  
**Rotate Array**
- reverse(nums.begin(), nums.begin() + k);

**Interval List Intersections**
- just believe
- l = max(A[i][0], B[j][0])
- r = min(A[i][1], B[j][1])
- only l or r increment
- check if l < r
  
**Subarray Product Less Than K**
- sliding window
- res += r - l + 1
- 5 2 6 => 5 2 6  2 6  6

**Maximum Length of a Concatenated String with Unique Characters**
- try to enhance the solution with set
  
**LRU Cache**
- unordered_map + double linked list
  
**Find First and Last Position of Element in Sorted Array**
- check if l was found

**Remove Duplicates from Sorted List II**
- sentinel node -> to remove the entire list
- predecessor node -> to remove a sublist
- head node -> to scroll trought the list
- when we need to do somethings besides 'while', we can use if and while inside
- as we need to walk everytime with the head, put head->next after the loop

**Word Search**
- backtrack
- replace the letter by #, then undo it.

**Excel Sheet Column Number**
- A little wierd, but ok! (quick review)

**String Compression**
- to_string(count) convert 12 to "12", for example
- be careful not to imply wrong things from the question description, for example: order

**Median of Two Sorted Arrays**
- median line is what's matters
- r = n ??

**Copy List with Random Pointer**
- treat as a graph
- map<old_node, new_node>
- could you improve?
  
**Number of Provinces**
- It's not equal to number of islands
- You need to traverse as a graph, row by row
- each row is an element 

**Sort Colors**
- move zeroes but two times

**Add Two Numbers**
- review basic math: carry, sum, etc..
  
**Merge k Sorted Lists**
- Merge two Sorted Lists + divide and conquer logic

**Linked List Cycle**
- Floyd's Cycle Finding Algorithm
  
**Lowest Common Ancestor of a Binary Tree**
- review the idea

**Populating Next Right Pointers in Each Node**
- assume that if you are solving N + 1 Level, so N level it was already solved
- 2 connections that you need to put

**Rotate Image**
- review transpose and reflect
- which solution is better?

**Binary Tree Zigzag Level Order Traversal**
- odd levels from the end, and even levels from the beginning :)

**Longest Palindromic Substring**
- be careful with variables after it get out the loop
- ini = i - (maxlen - 1) / 2

**Review**
- number of islands (bfs)
- Subarray Product Less Than K (trick idea)
- findCircleNum (why only visited[j]??)
- Subsets, why if(i > index && nums[i] == nums[i-1])? Complexity?
- Find First and Last Position of Element in Sorted Array without STL?
- Search a 2D Matrix
  - both questions above deal with lower_bound without stl
  - actually, all the 5 questions of cracking algo 2 need to be reviewed
  
- complexity em backtracking?
- LRU Cache require a new DS (crazy!)
- Find Minimum in Rotated Sorted Array solution is intuitive?
- Spiral Matrix (crazy solution!!) 
- Find Peak Element (sometimes I forget the solution :/)
- 3sum (faster solution)
- Word Search
- backspaceCompare (trick edge cases)
- Container With Most Water (insane greddy) 
- Median of Two Sorted Arrays (insane question)
- Copy List with Random Pointer (review and improve?)
- Number of Provinces (remember!! it's not equal to number of islands)
- Add Two Numbers (basic math)
- Intersection of Two Linked Lists (amazing solution!!)
- Merge k Sorted Lists (insane optmization)
- Floyd's Cycle Finding Algorithm (nice solution!)
- Lowest Common Ancestor of a Binary Search Tree (very wierd idea!!)
- Lowest Common Ancestor of a Binary Tree (good solution, quick review)
- Rotate Image (which solution is better?)
- Review Trie! (hardiest question of this list) REVIEWD!
- Serialize and Deserialize Binary Tree (understand space in serialize and recursion in dereserialize)
- Serialize and Deserialize BST which the difference between BT and BST, in this case?
- Populating Next Right Pointers in Each Node II (insane recursion)