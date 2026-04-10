#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vint t;
    for(int i=0; i<4; i++){
        double temp;
        cin >> temp;
        int tempint=temp*100+0.5;
        t.push_back(tempint);
    }
    double targetd;
    cin >> targetd;
    int target=targetd*100+0.5;
    sort(t.begin(), t.end());
    if(t[1]+t[2]+t[3]<=3*target){
        cout << "infinite\n";
    }
    else{
        int sum=t[0]+t[1]+t[2];
        if(sum>3*target){
            cout << "impossible\n";
        }
        else{
            int ans=3*target-t[1]-t[2];
            cout << fixed << setprecision(2) << (double)ans/100.0 << endl;
        }
    }
    return 0;
}