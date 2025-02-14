class Solution {
public:
    int maxDifference(string str) {
        int n=str.length();
        vector<int> count(26,0);

        for(int i=0;i<n;i++){
            char ch=str[i];
            int asci=ch-'a';
            count[asci]++;
        }
        int maxi=0,mini=INT16_MAX;
        for(int i=0;i<count.size();i++){
            if(count[i]%2==1){
                maxi=max(maxi,count[i]);
            }
            else{
                if(count[i]==0){
                    continue;
                }
                else{
                    mini=min(mini,count[i]);
                }
            }
        }
        return maxi-mini;
    }
};