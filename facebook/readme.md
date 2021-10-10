**Facebook main questions review**

**Dynamic Programming**
**Longest Palindromic Substring (expand around to center)**
- there are 2n - 1 centers (i.e., abba case)
- start = i - (len - 1) / 2; end = i + len / 2; return r - l - 1

**Longest Palindromic Subsequence**
- fill main diagonal with 1 
- L[i][j] = max(L[i + 1][j], L[i][j - 1])
- s[i] == s[j] => L[i][j] = L[i + 1][j - 1] + 2
- s[i] == s[j] && k == 2 => L[i][j] = 2;
  
**Longest Palindromic Substring**
- solve palindromes size 1
- solve palindromes size 2
- L[i + 1][j - 1] && s[i] == s[j] => L[i][j] = true
- memset(L, 0, sizeof(L));

**Longest Common Prefix**
- just need to compare with the first word
- be careful with "" edge case
  
**Length of Longest Substring**
- vector<int> dict(256, -1);
- check if the last character position is greater than start
- when we have a repetition, we need to restart our counter
- dict[s[i]] > start => start = dict[s[i]]
