#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int x, int w, int h, int n){
    if(x/w==0 || x/h==0){
        return false;
    }
    return (x/w)>=(n+(x/h)-1)/(x/h);
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int w, h, n;
    cin >> w >> h >> n;
    int high=1e15, low=1;
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid, w, h, n)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    if(check(low, w, h, n)){
        cout << low << endl;
    }
    else{
        cout << high << endl;
    }
    return 0;
}