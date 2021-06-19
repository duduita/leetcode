#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
  stack<char> stack;
  if (s.size() == 1)
    return false;
  for (auto i : s) {
    if (i == '{' or i == '(' or i == '[')
      stack.push(i);
    else if (!stack.empty() and i == '}' and stack.top() != '{')
      return false;
    else if (!stack.empty() and i == ')' and stack.top() != '(')
      return false;
    else if (!stack.empty() and i == ']' and stack.top() != '[')
      return false;
    else if (!stack.empty())
      stack.pop();
    else
      return false;
  }
  if (stack.empty())
    return true;
  return false;
}

int main() {
  string s = ")(){}";
  cout << isValid(s);
  return 0;
}