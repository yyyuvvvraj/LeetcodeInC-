class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs[0].size(); i++){
            for(auto s : strs){
                if(s[i] != strs[0][i]){
                    return res;
                }
            }
            res += strs[0][i];
        }
        return res;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 14/03/26.
//