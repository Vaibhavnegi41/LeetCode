class Solution {
public:
    bool isThree(int n) {
        
        int count=0;
        for(int i=1;i*i<=n;i++){
            int first=i,second=n/i;

            if(n%first==0 || n%second==0){
                if(first==second){
                count++;
                continue;
            }
            }
            if(n%first==0 && n%second==0){
                count=count+2;
            }
            
        }
        if(count==3){
            return 1;
        }
        return 0;
    }
};