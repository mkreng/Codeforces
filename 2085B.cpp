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
        int firstZero=LONG_LONG_MIN, lastZero=LONG_LONG_MIN;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==0){
                lastZero=i;
                if(firstZero==LONG_LONG_MIN){
                    firstZero=i;
                }
            }
        }
        if(firstZero==LONG_LONG_MIN){
            cout << "1\n1 " << n << endl;
        }
        else if(firstZero==lastZero){
            if(a[0]==0){
                cout << "2\n1 " << n-1 << endl << "1 2\n";
            }
            else{
                cout << "2\n2 " << n << endl << "1 2\n";
            }
        }
        else if(!(a[0]==0 && a[n-1]==0)){
            cout << "2\n" << firstZero+1 << " " << lastZero+1 << endl << "1 " << n-lastZero+firstZero << endl;
        }
        else{
            cout << "3\n3 " << n << endl << "1 2\n1 2\n";
        }
    }
    return 0;
}