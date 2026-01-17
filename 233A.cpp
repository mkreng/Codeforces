#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    if(n%2==1){
        cout << "-1\n";
        return;
    }
    int ans[n];
    for(int i=0; i<n; i+=2){
        ans[i]=i+2;
        ans[i+1]=i+1;
    }
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return;
}
int main(){
    solve();
    return 0;
}