class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        mergeSort(nums,l,r);
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r) return;
        int m=l+(r-l) / 2;
        
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    void merge(vector<int> &arr, int l, int m, int r){
        vector <int> a1,a2;
        for(int i=l;i<=m;i++) a1.push_back(arr[i]);
        for(int j=m+1;j<=r;j++) a2.push_back(arr[j]);
        
        int i=0,j=0,k=l;
        while(i<a1.size() && j<a2.size()){
            if(a1[i]<=a2[j]) arr[k++]=a1[i++];
            else arr[k++]=a2[j++];
        }
        while(i<a1.size()){
            arr[k++]=a1[i++];
        }
        while(j<a2.size()){
            arr[k++]=a2[j++];
        }
    }
};
