// vector::begin/end
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /*   std::vector<int> myvector;
    for (int i = 1; i <= 5; i++)
      myvector.push_back(i);

    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end();
         ++it)
      std::cout << ' ' << *it;
    std::cout << '\n'; */

  vector<vector<int>> res;
  if (res.size() == 0)
    res.push_back(vector<int>());
  res[0].push_back({1});

  for (auto i : res) {
    for (auto j : i)
      cout << j;
  }

  return 0;
}