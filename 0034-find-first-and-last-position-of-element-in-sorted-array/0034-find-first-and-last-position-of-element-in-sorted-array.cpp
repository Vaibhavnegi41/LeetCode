class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr(2);
        int flag=-1;
        int left=0, right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                flag=mid;
                right=mid-1;
            }
            else{
                if(target>nums[mid]){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        arr[0]=flag;
        int flag2=-1;
        int str=0, end=nums.size()-1;
        while(str<=end){
            int nid=str+(end-str)/2;
            if(target==nums[nid]){
                flag2=nid;
                str=nid+1;
            }
            else{
                if(target>nums[nid]){
                    str=nid+1;
                }
                else{
                    end=nid-1;
                }
            }
        }
        arr[1]=flag2;
        return arr;
    

    }
};