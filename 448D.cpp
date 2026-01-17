#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int n, m, k;
bool lessthank(int a){
    int value=0;
    for(int i=1; i<=n; i++){
        if(a%i==0){
            value+=min(m, a/i-1);
        }
        else{
            value+=min(m, a/i);
        }
        if(value>=k){
            return false;
        }
    }
    return value<k;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> k;
    int low=1, high=n*m;
    while(high-low>1){
        int mid=(high+low)/2;
        if(lessthank(mid)){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    if(lessthank(high)){
        cout << high << endl;
    }
    else{
        cout << low << endl;
    }
    return 0;
}