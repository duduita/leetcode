**Facebook main questions review**
**Don't forget!!**
- #include <bits/stdc++.h>
- using namespace std;

**Palindromic/Substring Main Questions**
**Valid Palindrome II**
- While s[r] == s[l] => l++; r--;
- return checkPalindrome(s, count + 1, r, l + 1) || checkPalindrome(s, count + 1, r - 1, l);
  
**Longest Palindromic Substring (bottom-up approach)** 
- solve palindromes size 1
- solve palindromes size 2
- L[i + 1][j - 1] && s[i] == s[j] => L[i][j] = true
- memset(L, 0, sizeof(L));

**Longest Palindromic Substring (expand around to center)**
- there are 2n - 1 centers (i.e., abba case)
- start = i - (len - 1) / 2; end = i + len / 2; return r - l - 1

**Longest Palindromic Subsequence (bottom-up approach)**
- fill main diagonal with 1 
- L[i][j] = max(L[i + 1][j], L[i][j - 1])
- s[i] == s[j] => L[i][j] = L[i + 1][j - 1] + 2
- s[i] == s[j] && k == 2 => L[i][j] = 2;
  
**Longest Common Prefix**
- just need to compare with the first word
- be careful with "" edge case

**Length of Longest Substring**
- vector<int> dict(256, -1);
- check if the last character position is greater than start
- when we have a repetition, we need to restart our counter
- dict[s[i]] > start => start = dict[s[i]]

**Others**
**Minimum Remove to Make Valid Parentheses**
- Tranverse the array from the left
- Transverse from the right
- Replace and count the number os '#'

**Verifying an Alien Dictionary**
- First create the alienMap
- For each pair call checkWords
- Check the precedence of each letter

**K Closest Points to Origin**
- priority_queue<pair<float, int>> pq;

**Product of Array Except Self**
- Create the L array with left produtcs (bottom-up)
- Create the R array
- Product them O(1)

**Add Strings**
- if (sum > '9') => carry = 1; sum -= 10 else carry = 0;
- sum = a[n - i - 1] + b[m - i - 1] - '0' + carry;

**Add Binary**
- if a == '1' => carry++;
- if a == '0' => carry++;
- if carry % 2 == 1 => push_back('1')

**Leftmost Column with at Least a One**
- Approach 2: Binary Search Each Row
- Approach 3: Start at Top Right, Move Only Left and Down

**Binary Tree Right Side View**
- BFS is better in space
- when i == levelLength(queue.size) - 1, then push_back its value

**Find All Anagrams in a String**
- Sliding window
- Create a s1map and s2map
- Then check if the windows matching, else translade s2map

**Dot Product of Two Sparse Vectors**
- private map<int, int>
- sparceVector is a construction function, which fill up the private map
- Just iterate on the maps, in case of same index pos, multiply them

**Letter Combinations of a Phone Number**
- private map<int, string>
- for each index, find the possible_letters
- backtrack

**Binary Tree Level Order Traversal**
- res.size() == level => push_back({})
- recursion using level + 1

**Best Time to Buy and Sell Stock**
- As you can return 0, if a sum is <0, you can discard it

**Subarray Sum Equals K (contiguous)**
- map<int, int> m, m[0]++
- sum += nums[i];
  - if(m.find(sum - k) != m.end())
    - count += m[sum - k];
  - m[sum]++;

**First Bad Version**
- mid = l + (r-l)/2 => to avoid overflow

**move Zeroes**
- nums[i] != 0 => swap(nums[l++], nums[i])

**Convert Binary Search Tree to Sorted Doubly Linked List**
- first and last pointers
- DFS to satisfy the in place condition

**Trie**
- first create a Trie class, which has a linked list, where each node is composed by a array 26, starting as 0
- Add: if there already have a specific node in a specific level, use it, else, create other
- Search: if there isn't a '.', just iterate in your linked list, else test all possible options

**Accounts Merge**
- findParent function
- create our owner/parents map
- update our parents map
- union our subsets
- push our answer

**Sums**
**Two Sum O(n) space and time**
- create a map<value, position>
- if there's target - value, push_back to res target-value and i
- if not, m[nums[i]] = position

**Two Sum Ordered O(n) time and O(1) space**
- two pointers technique
- if get, return, else r-- or l++

**Subarray Sum Equals K**
- map<cummulative_sum_i, number_of_ocurrences_sum_i>
- m[0]++
- if m[cum - k] exists, so counter ++ m[cumm - k]
- m[cum]++
- cum[i] - cum[j] = k => it means that we have here a subarray which sum is equal to K

**Judge Square Sum**
- O(sqrt(c)log(sqrt(c))) in time and O(sqrt(c)) in space
- max = sqrt(c)
- set.insert i*i
- if(c - i*i) return true

**Check Subarray Sum**
- unordered_set because you don't care about quant
- mod = cum % k, and find mod (be careful with k = 0)
- the required length is at least 2, so we just need to insert the mod one iteration later.

**3 Sum**
- need review!!

**Clone Graph** 
- Need review to fix!
- O(M + N), O(N)
- m[1] = O(1) -> m[2] and m[4]
- where m[2] = O(2)

**Buildings With an Ocean View**
- from the right to the left :)
  
**Random Pick with Weight**
- If the right element is greater, so he could be a peak
- If the right element is lower, so you could be a peak
- binary search (r = mid)
  
**Random Pick Index**
- return m[target][rand() % m[target].size()];
- Reservoir sampling (1/n is the probability of a hat being chosen)

**Next Permutation**
- find que element that end a descending order subarray

**Inorder Traversal**
- iteratively == push all left nodes first

**Meeting Rooms**

**Vertical Order Traversal of a Binary Tree**
- map<int, map<int, multiset<int>>>
- queue<pair<TreeNode*, pair<int, int>>>
- m[x][y].insert(node->val)
- each (x, y) should have a multiset
  
**Binary Tree Vertical Order Traversal**
- map<int, vector<int>>
- each x should have a vector
  
**Review**
- Clone Graph
- Move Zeroes
- Meeting Rooms (why static comp is too slow?)
- Priority queue min without integers?

tomorrow:
intersection + review
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
https://leetcode.com/problems/sparse-matrix-multiplication/
https://leetcode.com/problems/word-break/
https://leetcode.com/problems/alien-dictionary/
https://leetcode.com/problems/remove-invalid-parentheses/ OK
https://leetcode.com/problems/roman-to-integer/
https://leetcode.com/problems/integer-to-english-words/ <- solução
https://leetcode.com/problems/serialize-and-deserialize-binary-tree/

https://leetcode.com/problems/making-a-large-island/
https://leetcode.com/problems/merge-k-sorted-lists/
https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/
https://leetcode.com/problems/diameter-of-binary-tree/
https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
https://leetcode.com/problems/binary-tree-maximum-path-sum/
https://leetcode.com/problems/minimum-window-substring/solution/


https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

https://leetcode.com/explore/interview/card/facebook/55/dynamic-programming-3/3035/
https://leetcode.com/problems/strobogrammatic-number-ii/

9:32 
https://leetcode.com/problems/alien-dictionary/
