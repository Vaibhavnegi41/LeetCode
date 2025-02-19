class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
        }
        return count;
    }
};