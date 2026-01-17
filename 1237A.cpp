#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int odd=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            cout << a[i]/2 << endl;
        }
        else{
            if(odd%2==0){
                if(a[i]<0){
                    cout << a[i]/2 << endl;
                }
                else{
                    cout << a[i]/2+1 << endl;
                }
            }
            else{
                if(a[i]<0){
                    cout << a[i]/2-1 << endl;
                }
                else{
                    cout << a[i]/2 << endl;
                }
            }
            odd++;
        }
    }
    return 0;
}