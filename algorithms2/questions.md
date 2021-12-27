**Search in Rotated Sorted Array**
- check if target is in a non-rotated array
  - in this case, check if the target is in that

**Search Matrix**
- binary search na coluna
- binary search na linha
- l < r && r = mid

**Find Minimum in Rotated Sorted Array**
- nums[mid] < nums[r]

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
  
**Review**
- Search in Rotated Sorted Array
- Search Matrix
- Find Minimum in Rotated Sorted Array
- backspaceCompare
- 3sum (faster solution)
- number of islands (bfs)
- Container With Most Water (prof greddy)
- Subarray Product Less Than K (trick idea)
- findCircleNum (why only visited[j]??)
- Subsets, why if(i > index && nums[i] == nums[i-1])? Complexity?


- Find First and Last Position of Element in Sorted Array without STL?
- Search a 2D Matrix
  - both questions above deal with lower_bound without stl
- complexity em backtracking?
- LRU Cache require a new DS