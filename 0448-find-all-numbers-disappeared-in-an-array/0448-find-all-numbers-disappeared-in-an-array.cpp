class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n+1,0);
        for(int i=0;i<n;i++){
            ans[arr[i]]++;
        }
        vector<int> count;
        for(int i=1;i<n+1;i++){
            if(ans[i]==0){
                count.push_back(i);
            }
        }
        return count;

    }
};