class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        for(int i=0;i<m;i++){
        int target=nums2[i];
        int left=0, right=n-1;

        while(left <= right){
            int mid=left+(right-left)/2;
            if(nums1[mid]==target){
                return target;
            }
            else if(nums1[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        }
        return -1;
    }
};