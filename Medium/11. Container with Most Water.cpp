class Solution {
public:
    //bruteForce Approach
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n;j++){
                int weight = j - i;
                int ht = min(height[i], height[j]);
                int area = weight * ht;
                ans = max(ans,area);
            }
        }
        return ans;
    }
    //Optimal Method
    int maxArea(vector<int>& height) {
        int n = height.size();
        int right = n - 1;
        int left = 0;
        int ans = 0;
        while (left < right){
            int w = right - left;
            int h = min(height[right], height[left]);
            int area = w * h;
            ans = max(area,ans);
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }

};

//
// Created by Yuvraj Rajni Sachin Deshmukh on 26/02/26.
//