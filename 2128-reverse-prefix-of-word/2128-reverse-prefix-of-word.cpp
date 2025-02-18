class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.length();
        int idx=0;
        for(int i=0;i<n;i++){
            if(ch==word[i]){
                idx=i;
                break;
            }
        }
        int left=0, right=idx;
        while(left < right){
            swap(word[left],word[right]);
            left++;
            right--;
        }
        return word;

    }
};