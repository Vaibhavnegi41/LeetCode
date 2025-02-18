class Solution {
public:
    bool validity(char ch){
        if((ch >= 'a') && (ch<='z')){
            return true;
        }
        if((ch>='A') && (ch<='Z')){
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string str) {
        int n=str.length();
        int left=0, right=n-1;
        while(left < right){
            if(!validity(str[left])){
                left++;
                continue;
            }
            if(!validity(str[right])){
                right--;
                continue;
            }
            swap(str[left],str[right]);
            left++;
            right--;
        }
        return str;
    }
};