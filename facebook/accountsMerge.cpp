class Solution
{
private:
    string find(string s, map<string, string> &p)
    {
        return p[s] == s ? s : find(p[s], p); // if are the parent, return s, else, find the parent
    }

public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &acts)
    {
        map<string, string> owner;
        map<string, string> parents;
        map<string, set<string>> unions;
        for (int i = 0; i < acts.size(); i++)
        {
            for (int j = 1; j < acts[i].size(); j++)
            {
                parents[acts[i][j]] = acts[i][j]; // first, each email is its representative
                owner[acts[i][j]] = acts[i][0];   // the owner is the name
            }
        }
        for (int i = 0; i < acts.size(); i++)
        {
            string p = find(acts[i][1], parents); // find the parent of acts[0][1]
            for (int j = 2; j < acts[i].size(); j++)
                parents[find(acts[i][j], parents)] = p; // change the parent of the parent
        }
        for (int i = 0; i < acts.size(); i++)
            for (int j = 1; j < acts[i].size(); j++)
                unions[find(acts[i][j], parents)].insert(acts[i][j]); // union the elements according to its parents

        vector<vector<string>> res;
        for (pair<string, set<string>> p : unions)
        {
            vector<string> emails(p.second.begin(), p.second.end());
            emails.insert(emails.begin(), owner[p.first]);
            res.push_back(emails);
        }
        return res;
    }
};