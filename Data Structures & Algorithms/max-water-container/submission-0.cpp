class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int maximumArea = 0;
        int n = heights.size();
        int i = 0;
        int j = n - 1;
        while (i < j){
            int width = j - i;
            if (heights[i] > heights[j]) {
                maximumArea = max(maximumArea, heights[j] * width);
                j--;
            }else {
                maximumArea = max(maximumArea, heights[i] * width);
                i++;
            }
        }
        return maximumArea;
    }
};
