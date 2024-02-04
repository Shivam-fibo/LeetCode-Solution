class Solution {
public:
    int strStr(string haytsack, string needle) {
        int i = haytsack.find(needle);
        if(i != string::npos) return i;
        return -1;
    }
};