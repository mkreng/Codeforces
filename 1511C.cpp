#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    while(q--){
        int c;
        cin >> c;
        for(int i=0; i<n; i++){
            if(a[i]==c){
                cout << i+1 << " ";
                int temp=a[i];
                for(int j=i; j>0; j--){
                    a[j]=a[j-1];
                }
                a[0]=temp;
                break;
            }
        }
    }
    cout << endl;
    return 0;
}