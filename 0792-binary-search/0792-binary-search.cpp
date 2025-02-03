class Solution {
public:
    int bs(vector<int> &arr,int target,int start,int end){
        if(start > end){
            return -1;
        }
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            return bs(arr,target,mid+1,end);
        }
        else{
            return bs(arr,target,start,mid-1);
        }
    }
    int search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1;
        int idx=bs(arr,target,start,end);
        return idx;
    }
};