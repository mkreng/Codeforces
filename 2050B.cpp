#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint odd, even;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            if(i%2==0){
                even.push_back(temp);
            }
            else{
                odd.push_back(temp);
            }
        }
        int sum_odd=accumulate(odd.begin(), odd.end(), 0LL), sum_even=accumulate(even.begin(), even.end(), 0LL);
        if(sum_odd%odd.size()==0 && sum_even%even.size()==0 && sum_odd/odd.size()==sum_even/even.size()){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}