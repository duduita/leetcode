#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
void rec(int counts[26], int &result) {
  for (int i = 0; i < 26; ++i) {
    if (counts[i]) {
      counts[i]--;
      result++;
      rec(counts, result);
      counts[i]++;
    }
  }
}

int numTilePossibilities(string tiles) {
  int counts[26]{};
  for (auto i : tiles) {
    counts[i - 'A']++;
  }
  int result = 0;
  rec(counts, result);
  return result;
}

int main() {
  string tiles = {"AAB"};
  cout << numTilePossibilities(tiles);

  return 0;
}
// https://www.youtube.com/watch?v=xTNFs5KRV_g