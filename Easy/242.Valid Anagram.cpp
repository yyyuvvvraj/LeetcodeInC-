class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int> a;
        std::unordered_map<char,int> b;

        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s.size(); i++){
            a[s[i]]++;
            b[t[i]]++;
        }
        if(a == b){
            return true;
        }
        return false;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 13/03/26.
//