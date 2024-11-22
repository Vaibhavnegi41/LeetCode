class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k % n;
        vector<int> v(n);
        int j=0;
        for(int i=0;i<n;i++){
            v[j++]=nums[i];
        }
        int idx=0;
        for(int i=n-k;i<n;i++){
            nums[idx++]=v[i];
        }
        for(int i=0;i<n-k;i++){
            nums[idx++]=v[i];
        }
      
    }
};