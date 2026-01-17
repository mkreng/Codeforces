#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    if((n!=1 && k==1) || k>n){
        cout << "-1\n";
    }
    else if(n==1 && k==1){
        cout << "a\n";
    }
    else{
        int ab=n-k+2;
        bool printeda=false, printedb=false;
        for(int i=0; i<ab/2; i++){
            cout << "ab";
            printeda=true;
            printedb=true;
        }
        if(ab%2!=0){
            cout << "a";
            printeda=true;
        }
        char toprint='a';
        if(printeda){
            toprint='b';
        }
        if(printedb){
            toprint='c';
        }
        for(int i=0; i<n-ab; i++){
            cout << toprint;
            toprint++;
        }
        cout << endl;
    }
    return 0;
}