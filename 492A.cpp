#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int x, int n){
    return x*(x+1)*(x+2)/6<=n;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int low=1, high=39;
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid, n)){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    if(check(high, n)){
        cout << high << endl;
    }
    else{
        cout << low << endl;
    }
    return 0;
}