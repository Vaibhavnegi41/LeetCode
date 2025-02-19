class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int maxi1=INT16_MIN;
        int index=0;
        for(int i=0;i<n;i++){
            if(maxi1 < arr[i]){
                index=i;
                maxi1=arr[i];
            }
        }
        int n1=maxi1-1;
        int maxi2=INT16_MIN;
        for(int i=0;i<n;i++){
            if(i==index){
                continue;
            }
            if(maxi2 < arr[i]){
                maxi2=arr[i];
            }
        }
        int n2=maxi2-1;

        return (n1*n2);
    }
};