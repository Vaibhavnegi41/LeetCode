class Solution {
public:
    double myPow(double x, int n) {
        long binary=n;
        if(n<0){
            x=(1/x);
            binary=-binary;
        }
        double ans=1;
        while(binary > 0){
            if(binary%2==1){
                ans=ans*x;
            }
            x=x*x;
            binary=binary/2;
        }
        return ans;
    }
};