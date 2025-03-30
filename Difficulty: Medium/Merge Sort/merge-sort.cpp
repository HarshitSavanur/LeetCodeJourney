//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
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


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends