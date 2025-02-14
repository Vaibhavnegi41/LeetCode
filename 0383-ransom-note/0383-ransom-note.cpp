class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.length() , m=magazine.length() ;
        vector<int> count1(26,0);
        for(int i=0;i<n;i++){
            char ch=ransomNote[i];
            int asci=ch-'a';
            count1[asci]++;
        }
        vector<int> count2(26,0);
        for(int i=0;i<m;i++){
            char ch=magazine[i];
            int asci=ch-'a';
            count2[asci]++;
        }
        for(int i=0;i<count1.size();i++){
            if((count1[i]!=count2[i]) &&(count2[i] < count1[i])){
                return false; 
            }
        }
        return true;
    }
};