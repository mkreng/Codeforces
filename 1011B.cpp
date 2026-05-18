#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int x, int n, vint &freq){
    int y=0;
    for(auto i:freq){
        y+=i/x;
    }
    return y>=n;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vint a(m), freq(101, 0);
    for(auto &i:a){
        cin >> i;
        freq[i]++;
    }
    int l=0, h=100;
    while(h-l>1){
        int mid=(h+l)/2;
        if(check(mid, n, freq)){
            l=mid;
        }
        else{
            h=mid-1;
        }
    }
    if(check(h, n, freq)){
        cout << h << endl;
    }
    else{
        cout << l << endl;
    }
    return 0;
}