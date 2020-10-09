#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    set<int, greater<int>> s1;

    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
    s1.insert(50); // only one 50 will be added to the set
    s1.insert(10);

    set <int, greater <int> > :: iterator itr; 

    for (itr = s1.begin(); itr != s1.end(); ++itr)
    {
        cout << '\t' << *itr;
    }

    return 0;
}