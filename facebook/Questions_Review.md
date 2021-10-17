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
- max = sqrt(c)
- set.insert i*i
- if(c - i*i) return true