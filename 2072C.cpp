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
        int n, x;
        cin >> n >> x;
        int m;
        for(int i=0; i<=30; i++){
            if(((1<<i)&x)==0){
                m=i;
                break;
            }
        }
        int p=0, o=0;
        for(int i=0; i<min(n-1, (1LL<<m)); i++){
            cout << i << " ";
            o|=i;
            p++;
        }
        for(int i=0; i<n-p; i++){
            if((o|p)==x){
                cout << p << " ";
            }
            else{
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}