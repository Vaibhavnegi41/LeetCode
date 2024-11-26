class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n=a.size();
        int max=0;
        for(int i=0;i<n;i++){
            if(max < a[i]){
                max=a[i];
            }
        }
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=i;
        }
        for(int i=0;i<n;i++){
            sum=sum-a[i];
        }
        return sum;
    }
};