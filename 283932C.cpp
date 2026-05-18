#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int a, int n, int x, int y){
    return (a/x)+(a/y)>=n-1;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, y;
    cin >> n >> x >> y;
    if(y<x){
        swap(x, y);
    }
    int high=(n-1)*x, low=0;
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid, n, x, y)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    if(check(low, n, x, y)){
        cout << low+x << endl;
    }
    else{
        cout << high+x << endl;
    }
    return 0;
}