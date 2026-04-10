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
        else{
            if(n%2){
                cout << "-1\n";
            }
            else{
                int a=1, d=n;
                for(int i=0; i<n; i++){
                    if(i%2){
                        cout << a << " ";
                        a+=2;
                    }
                    else{
                        cout << d << " ";
                        d-=2;
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}