#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) {
  unordered_set<char> set;
  int res = 0, j = 0, i = 0;
  while (i < s.size()) {
    if (set.find(s[i]) == set.end()) {
      set.insert(s[i]);
      i++;
      res = max(res, i - j);
    } else {
      set.erase(s[j]);
      j++;
    }
  }
  return res;
}

int main() {
  string shape = {"pwwekw"};
  cout << lengthOfLongestSubstring(shape);

  return 0;
}