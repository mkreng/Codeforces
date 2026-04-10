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
        if(n%4){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            int l=-2;
            for(int i=0; i<n/2; i++){
                if(i%2){
                    cout << l+2 << " ";
                    l+=2;
                }
                else{
                    cout << l+4 << " ";
                    l+=4;                    
                }
            }
            l=-1;
            for(int i=0; i<n/2; i++){
                if(i%2){
                    cout << l+4 << " ";
                    l+=4;
                }
                else{
                    cout << l+2 << " ";
                    l+=2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}