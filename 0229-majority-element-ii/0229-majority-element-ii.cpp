class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        int maxi=arr[0],mini=arr[0];
        int limit=floor(n/3);
        for(int i=1;i<n;i++){
            if(maxi < arr[i]){
                maxi=arr[i];
            }
            if(mini > arr[i]){
                mini=arr[i];
            }
        }
        int range=maxi-mini+1;
        vector<int> ans(range,0);
        for(int i=0;i<n;i++){
            ans[arr[i]-mini]++;
        }
        vector<int> data;
        for(int i=0;i<ans.size();i++){
            if(ans[i] > limit){
                data.push_back(i+mini);
            }
        }
        return data;

    }
};