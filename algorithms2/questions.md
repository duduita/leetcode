**Search in Rotated Sorted Array**
- nums[mid] > nums[l] ?
- target >= nums[l] && nums[mid] > target

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
  
**Review**
- Search in Rotated Sorted Array
- Search Matrix
- Find Minimum in Rotated Sorted Array
- backspaceCompare
- 3sum (faster solution)
- number of islands (bfs)
- Container With Most Water (prof greddy)