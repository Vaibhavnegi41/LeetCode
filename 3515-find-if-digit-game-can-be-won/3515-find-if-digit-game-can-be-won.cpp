class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int len=nums.size();
        int single_sum=0, double_sum=0;
        for(int i=0 ; i < len ; i++){

            if(nums[i]<10){
                single_sum+=nums[i];
            }
            else{
                double_sum+=nums[i];
            }
        }
        if(single_sum > double_sum){
            return true;
        }
        if(single_sum < double_sum){
            return true;
        }
        return false;
    }
};