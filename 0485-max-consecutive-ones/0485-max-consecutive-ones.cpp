class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();
        int maxi=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count++;
            }
            
            else{
                maxi=max(maxi,count);
                count=0;
            }
        }
        maxi=max(maxi,count);
        return maxi;
    }
};