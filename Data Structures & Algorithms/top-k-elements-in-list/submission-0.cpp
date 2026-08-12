class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            mp[nums[i]] += 1;
        }
        vector<pair<int,int>>p(mp.begin(),mp.end());
        sort(p.begin(),p.end(),[](pair<int,int>&a,pair<int,int>&b){
            return a.second > b.second;
        });
        vector<int>ans;
        for (auto it:p){
            ans.push_back(it.first);
            k--;
            if (k == 0) break;
        }
        return ans;
    }
};
