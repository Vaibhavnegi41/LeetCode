class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        int j=0;
        for(int i=0;i<n;i++){
            int org=nums[i];
            int data=0;
            int count=0;
            while(org>0){
                int rem=org%10;
                if((rem==0) && (data==0)){
                    count++;
                }
                data=data*10+rem;
                org=org/10;
            }
            while(data > 0){
                int rem = data % 10;
                v.push_back(rem);
                data = data / 10;
            }
            while(count > 0){
                v.push_back(0);
                count--;
            }
        }
        return v;
    }
};