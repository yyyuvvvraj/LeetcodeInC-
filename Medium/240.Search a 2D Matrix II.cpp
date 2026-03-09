class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int r = 0;
        int c = m - 1;
        while(c >= 0 && r < n){
            if(target == matrix[r][c]){
                return true;
            }else if(target < matrix[r][c]){
                c--;
            }else{
                r++;
            }
        }
        return false;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 07/03/26.
//