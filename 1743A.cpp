#include <bits/stdc++.h>
using namespace std;
int ncr(int n, int r){
    if(r>n){
        return 0;
    }
    if(r==0 || r==n){
        return 1;
    }
    return ncr(n-1, r-1)+ncr(n-1, r);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << ncr(10-n, 2)*6 << endl;
    }
    return 0;
}