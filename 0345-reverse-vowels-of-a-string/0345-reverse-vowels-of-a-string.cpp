class Solution {
public:
    bool validVowels(char ch){
        if((ch=='a') || (ch=='e') || (ch=='i')||(ch=='o')||(ch=='u')){
            return true;
        }
        if((ch=='A') || (ch=='E') || (ch=='I')||(ch=='O')||(ch=='U')){
            return true;
        }
        return false;
    }
    string reverseVowels(string str) {
        int n=str.length();
        int left=0,right=n-1;
        while(left < right){
            if(!validVowels((str[left]))){
                left++;
                continue;
            }
            if(!validVowels((str[right]))){
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