class Solution {
public:
        // It is a sorted 2d array 
        // so start from upper left element 
        // if target >ele then move down 
        //if target<el the move left
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=size(matrix)-1; // rows
        int col = size(matrix[0])-1;    //colmn
       
        int i=0;
        int j=col;
        while(i<=row and j>=0)
        {
            int mid = matrix[i][j];
            if(matrix[i][j]==target)return true;
            
            else if(target<=mid) j--;
            else i++;
        }
         return false;  
    }
};
