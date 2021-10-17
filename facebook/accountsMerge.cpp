class Solution
{
public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        multimap<string, set<string>> m;
        multimap<string, set<string>>::iterator itr;

        for (int i = 0; i < accounts.size(); i++)
        {                                 // iterate over the accounts
            itr = m.find(accounts[i][0]); // get the account name
            if (itr != m.end())
            { // if there is an acc name
                int flag = false;
                for (int j = 0; !flag && j < accounts[i].size(); j++)
                {
                    if (itr->second.find(accounts[i][j]) != itr->second.end())
                    { // check if there is at least a same email
                        flag = true;
                        for (int k = 1; k < accounts[i].size(); k++)
                        { // so, insert all emails
                            itr->second.insert(accounts[i][k]);
                        }
                    }
                }
                if (!flag)
                { // if there's no acc name
                    set<string> temp;
                    for (int l = 1; l < accounts[i].size(); l++)
                        temp.insert(accounts[i][l]);  // insert all values to a temp
                    m.insert({accounts[i][0], temp}); // and insert the new pair to the multimap
                }
            }
        }
        vector<vector<string>> res;
        vector<string> aux;
        for (auto i : m)
        {
            aux.push_back(i.first); // pick the name
            for (auto j : i.second)
            {
                aux.push_back(j); // pick the emails
            }
            res.push_back(aux); // push the aux
            aux.clear();        // clear the aux
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