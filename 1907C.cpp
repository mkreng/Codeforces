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
        string s;
        cin >> s;
        vint freq(26, 0);
        for(int i=0; i<n; i++){
            freq[s[i]-'a']++;
        }
        int mx=*max_element(freq.begin(), freq.end());
        if(2*mx>n){
            cout << 2*mx-n << endl;
        }
        else{
            if(n%2){
                cout << "1\n";
            }
            else{
                cout << "0\n";
            }
        }
    }
    return 0;
}