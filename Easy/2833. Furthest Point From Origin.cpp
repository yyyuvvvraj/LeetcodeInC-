class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int dash = 0;

        for(char &ch : moves){
            if(ch == 'L') left++;
            else if(ch == 'R') right++;
            else dash++;
        }
        return abs(left - right) + dash;
    }
};
//
// Created by Yuvraj Rajni Sachin Deshmukh on 24/04/26.
//