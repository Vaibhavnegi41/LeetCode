class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int n=arr.size();
        int pos=0,neg=0;
        for(int i=0;i<n;i++){
            if(arr[i] < 0){
                neg++;
            }
            if(arr[i] > 0){
                pos++;
            }
        }
        int maxi=max(neg,pos);
        return maxi;
    }
};