class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>>mp;
        int n = strs.size();
        for (int i = 0; i < n; i++){
            string str = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(str);
        }
        for (auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
