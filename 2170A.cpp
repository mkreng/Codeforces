#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << "1\n";
        }
        else if(n==2){
            cout << "9\n";
        }
        else if(n==3){
            cout << "29\n";
        }
        else if(n==4){
            cout << "56\n";
        }
        else{
            cout << 5*(n*n-n-1) << endl;
        }
    }
    return 0;
}