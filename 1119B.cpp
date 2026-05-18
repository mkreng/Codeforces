#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int x, int n, int h, vint a){
    sort(a.begin(), a.begin()+x, greater<>());
    int b=0;
    for(int i=0; i<x; i+=2){
        b+=a[i];
    }
    return b<=h;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h;
    cin >> n >> h;
    vint a(n);
    for(auto &i:a){
        cin >> i;
    }
    int low=1, high=n;
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid, n, h, a)){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    if(check(high, n, h, a)){
        cout << high << endl;
    }
    else{
        cout << low << endl;
    }
    return 0;
}