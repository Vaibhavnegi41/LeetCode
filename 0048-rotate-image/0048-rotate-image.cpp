class Solution {
public:
     
    void transpose(vector<vector<int>> &arr){
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i < j){
                    swap(arr[i][j],arr[j][i]);
                }
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        transpose(matrix);
        for(int i=0;i<n;i++){
            int left=0,right=n-1;
            while(left < right){
                swap(matrix[i][left],matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};