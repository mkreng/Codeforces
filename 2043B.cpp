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
        int n, d;
        cin >> n >> d;
        cout << "1 ";
        if(d%3==0 || n>2){
            cout << "3 ";
        }
        if(d==5){
            cout << "5 ";
        }
        if(d==7 || n>2){
            cout << "7 ";
        }
        if((d%3==0 && n>2) || d==9 || n>5){
            cout << "9 ";
        }
        cout << endl;
    }
    return 0;
}