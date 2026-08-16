class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        if (n == 0) return 0;
        for (int i = 0; i < n; i++){
            s.insert(nums[i]);
        }
        int len = 0;
        int maxi = 0;
        int i = 0;
        for (auto x:s) {
            if (s.find(x+1) != s.end()) continue;
            while (s.find(x) != s.end()){
                len++;
                x -= 1;
            }
            maxi = max(maxi,len);
            i++;
            len = 0;
        }
        return maxi;
    }
};
