**Facebook main questions review**

**Dynamic Programming**
**Longest Palindromic Substring**
- solve palindromes size 1
- solve palindromes size 2
- L[i + 1][j - 1] && s[i] == s[j] => L[i][j] = true
- memset(L, 0, sizeof(L));

**Longest Palindromic Substring (expand around to center)**
- there are 2n - 1 centers (i.e., abba case)
- start = i - (len - 1) / 2; end = i + len / 2; return r - l - 1

**Longest Common Prefix**
- just need to compare with the first word
- be careful with "" edge case
- 
**Longest Palindromic Subsequence**
- fill main diagonal with 1 
- L[i][j] = max(L[i + 1][j], L[i][j - 1])
- s[i] == s[j] => L[i][j] = L[i + 1][j - 1] + 2
- s[i] == s[j] && k == 2 => L[i][j] = 2;
  
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

**Valid Palindrome II**
- While s[r] == s[l] => l++; r--;
- return checkPalindrome(s, count + 1, r, l + 1) || checkPalindrome(s, count + 1, r - 1, l);

**K Closest Points to Origin**
- priority_queue<pair<float, int>> pq;

**Subarray Sum Equals K** 
- Need Review!

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
