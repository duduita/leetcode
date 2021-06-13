#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s) {
    int l = 0;
    int r = s.size()-1;
    while(1){
        while(l < r && !(s[l] == 'a' or s[l] == 'e' or s[l] == 'i' or s[l] == 'o' or s[l] == 'u' or s[l] == 'A' or s[l] == 'E' or s[l] == 'I' or s[l] == 'O' or s[l] == 'U'))
            l++;
        while(r > l && !(s[r] == 'a' or s[r] == 'e' or s[r] == 'i' or s[r] == 'o' or s[r] == 'u' or s[l] == 'A' or s[l] == 'E' or s[l] == 'I' or s[l] == 'O' or s[l] == 'U'))
            r--;
        if(l < r){
            swap(s[r], s[l]);
            l++;
            r--;
        }
        else break;
    }
    return s;
}

int main() {
    string s = {"hello"};
    cout << reverseVowels(s);
    return 0;
}