class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();

        int i = 0, j = col-1;


        while(i<rows &&  i>= 0 && j>=0 && j<col){
            if(matrix[i][j]== target){
                return true;
            }
            else if(target< matrix[i][j]){
                j--;
            }
            else{
                i++;
            }
            
        }
        return false;


        
    }
};
