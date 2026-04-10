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
        vint a(3*n);
        int l=3*n, s=1;
        for(int i=0; i<3*n; i+=3){
            a[i]=l;
            a[i+1]=l-1;
            a[i+2]=s;
            s++;
            l-=2;
        }
        for(auto i:a){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}