#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int turns, int h, int n, vector<pair<int, int>> &ac){
    int dmg=0;
    for(int i=0; i<n; i++){
        int temp=(turns-1)/ac[i].first+1;
        if(temp>=h){
            return true;
        }
        dmg+=temp*ac[i].second;
        if(dmg>=h){
            return true;
        }
    }
    return dmg>=h;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int h, n;
        cin >> h >> n;
        vector<pair<int, int>> ac(n);
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            ac[i].second=temp;
        }
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            ac[i].first=temp;
        }
        sort(ac.begin(), ac.end());
        int low=1, high=1e12;
        while(high-low>1){
            int mid=(high+low)/2;
            if(check(mid, h, n, ac)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        if(check(low, h, n, ac)){
            cout << low << endl;
        }
        else{
            cout << high << endl;
        }
    }
    return 0;
}