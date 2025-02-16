class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size();

        for(int i=0;i<n;i++){
            int data=arr[i];
            int count=0;
            for(int j=0;j<n;j++){
                if(data > arr[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }

        return ans;
    }
};