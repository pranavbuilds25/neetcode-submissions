class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int maxi = 0;
        vector<int>leftMax(n,0);
        vector<int>rightMax(n,0);
        for (int i = 0; i < n; i++){
            if (height[i] > maxi) {
                leftMax[i] = height[i];
                maxi = height[i];
            }else{
                leftMax[i] = maxi;
            }
        }
        maxi = height[n-1];
        for (int i = n - 1; i >= 0; i--){
            if (height[i] > maxi) {
                rightMax[i] = height[i];
                maxi = height[i];
            }else{
                rightMax[i] = maxi;
            }
        }
        for (int i = 0; i < n; i++){
            ans += min(rightMax[i],leftMax[i]) - height[i]; 
        }
        return ans;
    }
};
