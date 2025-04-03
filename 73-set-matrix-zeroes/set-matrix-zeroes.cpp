class Solution {
/*
this is the extra sol where we take extra space and a separate array
brute force approach is where u just for loop the matrix
1 find 0 convert others -1
2 convert -1 to 0
 int m = matrix.size();
        int n = matrix[0].size();
        vector<int> rows(m,1);
        vector<int> cols(n,1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rows[i]=0;
                    cols[j]=0;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i]==0 || cols[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
*/
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();//row size
        int n = matrix[0].size();//col size
        int col0=1;

        //Mark the rows and columns that need to be set to zero
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0) matrix[0][j]=0;
                    else col0=0;
                }
            }
        }
        //Set matrix elements to zero based on row and col markers
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }


    }
};