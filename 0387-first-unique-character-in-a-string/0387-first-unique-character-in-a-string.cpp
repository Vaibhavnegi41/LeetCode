class Solution {
public:
    int firstUniqChar(string str) {
        int n=str.length();
        vector<int> count(26,0);
        for(int i=0;i<n;i++){
            char ch=str[i];
            int asci=ch-'a';
            count[asci]++;
        }
        for(int i=0;i<n;i++){
            char ch=str[i];
            int asci=ch-'a';
            if(count[asci]==1){
                return i;
            }
        }
        return -1;
    }
};