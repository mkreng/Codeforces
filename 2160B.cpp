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
        vint b(n), a(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        a[0]=1;
        int maxa=1;
        for(int i=1; i<n; i++){
            int diff=b[i]-b[i-1];
            int rem=diff%(i+1);
            if(rem==0){
                a[i]=maxa+1;
            }
            else{
                a[i]=a[i-rem];
            }
            maxa=max(maxa, a[i]);
        }
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}