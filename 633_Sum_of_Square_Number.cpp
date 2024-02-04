class Solution {
public:
    bool judgeSquareSum(int c) {
        // if(c = 1) {
        //     return false;

        // }
        int start = 0;
        long long  end = sqrt(c);
        while(start <=  end){
            long long  solve = (start*start) + (end*end);
            if(solve == c){
                return true;
            }
            else if(solve < c){
                start++;
            }
            else{
                end--;
            }
        }
            return false;
    }
};