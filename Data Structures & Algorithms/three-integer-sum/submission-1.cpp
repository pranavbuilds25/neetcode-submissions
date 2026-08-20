class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>s;
        for (int i = 0; i < n; i++){
            set<int>hash;
            for (int j = i + 1; j < n; j++){
                int rem = -(nums[i] + nums[j]);
                if (hash.find(rem) != hash.end()){
                    vector<int>v = {nums[i],nums[j],rem};
                    sort(v.begin(),v.end());
                    s.insert(v);
                }
                hash.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};
