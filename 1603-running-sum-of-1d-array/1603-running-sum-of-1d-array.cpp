class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++){
            arr[i]=arr[i]+arr[i-1];
            ans.push_back(arr[i]);
        }
        return ans;
    }
};