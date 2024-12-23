class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int n=arr.size();
        int count=0;

        

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=arr[i]+arr[j];
                if(i < j){
                    if(sum<target){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};