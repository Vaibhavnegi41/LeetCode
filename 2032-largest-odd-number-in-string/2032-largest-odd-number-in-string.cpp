class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();

        for(int i=n ; i>=0 ; i--){
            int data=num[i]-'0';
            if((data%2) != 0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};