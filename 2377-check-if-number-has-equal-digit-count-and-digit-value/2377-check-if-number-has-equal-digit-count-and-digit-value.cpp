class Solution {
public:
    bool digitCount(string str) {
        int n=str.length();
        
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                char ch=str[j];
                if(ch==(char)i+'0'){
                    count++;
                }
            }
            char val=count+'0';
            if(str[i]!=val){
                return false;
            }

        }

        return true;
    }
};