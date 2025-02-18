class Solution {
public:
    int maxFrequencyElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        vector<int> count(maxi+1,0);
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        int max_freq=0;
        for(int i=0;i<count.size();i++){
            if(max_freq < count[i]){
                max_freq=count[i];
            }
        }
        int c=0;
        for(int i=0;i<count.size();i++){
            if(count[i]==max_freq){
                c=c+count[i];   
            }
        }
        return c;
    }
};