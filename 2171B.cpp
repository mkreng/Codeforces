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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i!=0 && i!=n-1 && a[i]==-1){
                a[i]=0;
            }
        }
        if(a[0]==-1 && a[n-1]==-1){
            cout << "0\n";
            a[0]=0;
            a[n-1]=0;
        }
        else if(a[0]==-1){
            cout << "0\n";
            a[0]=a[n-1];
        }
        else if(a[n-1]==-1){
            cout << "0\n";
            a[n-1]=a[0];
        }
        else{
            cout << abs(a[0]-a[n-1]) << endl;
        }
        for(auto i:a){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}