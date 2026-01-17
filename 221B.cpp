#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
unordered_set<int> digits;
bool check(int n){
    while(n>0){
        if(digits.find(n%10)!=digits.end()){
            return true;
        }
        n/=10;
    }
    return false;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    int xcpy=x;
    while(xcpy>0){
        digits.insert(xcpy%10);
        xcpy/=10;
    }
    int ans=0;
    for(int i=1; i*i<=x; i++){
        if(x%i==0 && check(i)){
            ans++;
        }
        if(x%(x/i)==0 && check(x/i) && i*i!=x){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}