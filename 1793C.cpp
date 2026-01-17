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
        }
        int x=0, y=n-1, mn=1, mx=n;
        bool ansfound=false;
        while(x<y-2){
            if(a[x]!=mx && a[x]!=mn && a[y]!=mx && a[y]!=mn){
                ansfound=true;
                break;
            }
            else{
                if(a[x]==mx){
                    x++;
                    mx--;
                }
                if(a[x]==mn){
                    x++;
                    mn++;
                }
                if(a[y]==mx){
                    y--;
                    mx--;
                }
                if(a[y]==mn){
                    y--;
                    mn++;
                }
            }
        }
        if(ansfound){
            cout << x+1 << " " << y+1 << endl;
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}