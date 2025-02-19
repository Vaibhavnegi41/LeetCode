class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        int size=arr.size();
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++){
            a.push_back(arr[i]);
        }
        for(int i=n;i<size;i++){
            b.push_back(arr[i]);
        }
        vector<int> ans;
        int j=0,k=0;
        for(int i=0;i<size;i++){
            if(i%2==0){
                ans.push_back(a[j++]);
            }
            else{
                ans.push_back(b[k++]);
            }
        }
        return ans;
    }
};