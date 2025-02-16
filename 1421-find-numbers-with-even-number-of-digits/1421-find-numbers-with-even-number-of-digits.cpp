class Solution {
public:
    int findNumbers(vector<int>& arr) {
        int data=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int value=arr[i];
            int count=0;
            while(value > 0){
                count++;
                value=value/10;
            }
            if(count%2==0){
                data++;
            }
        }

        return data;
    }
};