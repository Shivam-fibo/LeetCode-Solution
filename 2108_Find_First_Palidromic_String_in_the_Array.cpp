class Solution {
public: 
    bool isPalindrome(string str){
    int n = str.size();
    int s = 0; 
    int e = n - 1; 

    while(s <= e){
        if(str[s] != str[e])
            return false;
        
      
        s++;
        e--;
    }

    return true;
}

    string firstPalindrome(vector<string>& words) {
       for(const string& word : words){
           if(isPalindrome(word)){
               return word;
           }
       }
        return "";
    }
};