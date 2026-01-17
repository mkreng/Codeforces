#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int distinct=0;
    vector<int> ans(n+1);
    vector<bool> appeared(100001, false);
    for(int i=n-1; i>=0; i--){
        if(!appeared[a[i]]){
            appeared[a[i]]=true;
            distinct++;
        }
        ans[i]=distinct;
    }
    while(m--){
        int l;
        cin >> l;
        cout << ans[l-1] << endl;
    }
    return 0;
}