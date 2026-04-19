class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1,0);
        int d = -1, m = -1;

        for(int num : nums){
            freq[num]++;
        }
        for(int i = 1; i <= n; i++){
            if(freq[i] == 2) d = i;
            if(freq[i] == 0) m = i;
        }
        return {d,m};
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 19/04/26.
//