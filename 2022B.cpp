#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int m, vint &a, int x){
    int s1=0, s2=0;
    for(int i=0; i<a.size(); i++){
        s1+=min(a[i], m);
        s2+=a[i];
    }
    if(m*x<s2){
        return false;
    }
    return s1>=s2;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vint a(n);
        int s=0;
        for(auto &i:a){
            cin >> i;
            s+=i;
        }
        int low=1, high=s;
        while(high-low>1){
            int mid=(high+low)/2;
            if(check(mid, a, x)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        if(check(low, a, x)){
            cout << low << endl;
        }
        else{
            cout << high << endl;
        }
    }
    return 0;
}