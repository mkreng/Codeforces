#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
// #define endl "\n"
int ask(int l, int r){
    cout << "? " << l << " " << r << endl;
    int ans;
    cin >> ans;
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vint a(n);
    int l=ask(1, n), sall=l, ssec=ask(1, n-1);
    for(int i=1; i<n-1; i++){
        int temp=ask(i+1, n);
        a[i-1]=l-temp;
        sall-=a[i-1];
        ssec-=a[i-1];
        l=temp;
    }
    a[n-2]=ssec;
    a[n-1]=sall-a[n-2];
    cout << "! ";
    for(auto i:a){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}