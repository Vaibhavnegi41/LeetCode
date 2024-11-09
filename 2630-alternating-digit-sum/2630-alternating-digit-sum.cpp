class Solution {
public:
    int alternateDigitSum(int n) {
        int rev=0;
        while(n>0){
            int rem=n%10;
            rev=rev*10 + rem;
            n=n/10;
        }

        int sum=0;
        while(rev>0){
            int rem1=rev%10;
            sum=sum+rem1;
            rev=rev/10;
            int rem2=rev%10;
            sum=sum-rem2;
            rev=rev/10;

        }
        return sum;

    }
};