class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            int val = nums[i];
            int rem = target - val;
            if (mp.find(rem) != mp.end()){
                ans = {mp[rem],i};
                break;
            }
            mp[val] = i;
        }
        return ans;
    }
};
