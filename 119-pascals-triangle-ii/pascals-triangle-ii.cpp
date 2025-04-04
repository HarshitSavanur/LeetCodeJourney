class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1);
        for(int i = 0; i<=rowIndex;i++){
            if(i==0 || i==rowIndex) res[i]=1;
            res[i] = ncr(rowIndex, i);
        }
        //for(int i = rowIndex/2)
        return res;
    }
private:
    int ncr(int n, int r){
        r = min(r, n-r);
        long x=1, y =2;
        for(int i = n; i > n-r; i--){
            x*= i;
            while(r >= y && x%y == 0){
                x = x/y;
                y++;
            }
        }
        while(r >= y && x%y == 0){
            x = x/y;
            y++;
        }
        return x;
    }
};