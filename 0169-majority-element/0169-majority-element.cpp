class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size();
    for(int val : nums){
        int count=0;
        for(int el : nums ){
            if(val==el){
                count++;
            }
        }
        if(count > (floor(n/2))){
            return val;
        }
    }
    return -1;
    }    
};