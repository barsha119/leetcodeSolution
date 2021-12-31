class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        if (strs.size() == 0) return v;
        
        vector<string> v1;
        unordered_map<string, vector<string>> m;
        
        for(int i = 0;i<strs.size();++i){
            v1.push_back(strs[i]);
        }
        for(int i = 0;i<strs.size();++i){
            sort(v1[i].begin(), v1[i].end());
        }
        for(int i = 0;i<strs.size();++i){
            m[v1[i]].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto itr = m.begin();itr != m.end();++itr){
            vector<string> ans1;
            auto x = itr->second;
            for(int i = 0;i<x.size();++i){
                ans1.push_back(x[i]);
            }
            ans.push_back(ans1);
        }
        
        return ans;
    }
};
