#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int ds(int x){
    int ans=0;
    while(x){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
int pw(int a, int b){
    int ans=1;
    while(b--){
        ans*=a;
    }
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    vint ans;
    for(int i=1; i<=81; i++){
        int x=pw(i, a)*b+c;
        if(x>0 && x<1e9 && ds(x)==i){
            ans.push_back(x);
        }
    }
    cout << ans.size() << endl;
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}