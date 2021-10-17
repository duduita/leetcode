class Solution
{
public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        multimap<string, set<string>> m;
        multimap<string, set<string>>::iterator itr;

        set<string> temp;
        for (int i = 0; i < accounts.size(); i++)
        {
            for (int j = 1; j < accounts[i].size(); j++)
                temp.insert(accounts[i][j]);
            m.insert({accounts[i][0], temp});
            temp.clear();
        }

        for (int i = 0; i < accounts.size(); i++)
        {                                 // i = 1
            itr = m.find(accounts[i][0]); // accounts[1][0] = John
            bool flag = false;
            if (itr != m.end())
            {
                flag = false;
                for (int j = 0; !flag && j < accounts[i].size(); j++)
                    if (itr->second.find(accounts[i][j]) != itr->second.end())
                    {
                        flag = true;
                        for (int k = 1; k < accounts[i].size(); k++)
                            itr->second.insert(accounts[i][k]);
                    }
            }
            if (!flag)
            { // flag = false
                set<string> temp;
                for (int l = 1; l < accounts[i].size(); l++)
                    temp.insert(accounts[i][l]);  // temp = {jhonssmith@mail.com, jhon_newyork@mail.com}
                m.insert({accounts[i][0], temp}); // m = {{Jhon, temp}}
            }
        }
        vector<vector<string>> res;
        vector<string> aux;
        for (auto i : m)
        {
            aux.push_back(i.first);
            for (auto j : i.second)
                aux.push_back(j);
            res.push_back(aux);
            aux.clear();
        }
        return res;
    }
};

/*

jhon -> key
jhonsmith@mail.com -> will be in my set
john_newyork@mail.com -> will be in my set

jhon -> there's is this key on my map?
jhonsmith@mail.com -> there's?
john00@mail.com -> there's?

mary
mary@mail.com

john
johnnybravo@mail.com

*/