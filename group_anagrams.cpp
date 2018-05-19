class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;
        map<string,vector<string>> m;
        
        int n=strs.size();
        
        for(int i=0;i<n;i++)
        {
            string s=strs[i];
            string p=s;
            sort(s.begin(),s.end());
            m[s].push_back(p);
        }
        
        for(auto i:m)
        {
            vector<string> temp(i.second.begin(),i.second.end());
            res.push_back(temp);
        }
        
        return res;
    }
};
