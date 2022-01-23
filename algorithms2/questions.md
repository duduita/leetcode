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
  
**Rotate Array**
- reverse(nums.begin(), nums.begin() + k);

**Interval List Intersections**
- just believe
- l = max(A[i][0], B[j][0])
- r = min(A[i][1], B[j][1])
- only l or r increment
  
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

**Review**
- backspaceCompare
- number of islands (bfs)
- Container With Most Water (prof greddy)
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