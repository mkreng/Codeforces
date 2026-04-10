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
    int maxlen=-1;
    for(int i=0; i<n; i++){
        int len=1;
        int j=i+1;
        for(; j<n; j++){
            if(a[j]>a[j-1]){
                len++;
            }
            else{
                i=j-1;
                break;
            }
        }
        maxlen=max(len, maxlen);
        if(j==n){
            break;
        }
    }
    cout << maxlen << endl;
    return 0;
}