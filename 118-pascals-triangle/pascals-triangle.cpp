class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        if(numRows == 1) return res;
        res.push_back({1,1});
        if(numRows == 2) return res;

        for(int i = 3; i <= numRows; i++){
            vector<int> temp(i);
            for(int j = 0; j < i; j++){
                if(j == 0 || j == i - 1) {temp[j] =  1; continue;}
                temp[j] = res[i-2][j-1] + res[i-2][j];
            }
            res.push_back(temp);
        }
        return res;
    }
};