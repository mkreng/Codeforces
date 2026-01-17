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
            if(temp%2){
                odd.push_back(temp);
            }
            else{
                even.push_back(temp);
            }
        }
        if(even.size()==0){
            cout << *max_element(odd.begin(), odd.end()) << endl;
        }
        else if(odd.size()==0){
            cout << *max_element(even.begin(), even.end()) << endl;
        }
        else{
            cout << accumulate(even.begin(), even.end(), 0LL)+accumulate(odd.begin(), odd.end(), 0LL)-odd.size()+1 << endl;
        }
    }
    return 0;
}