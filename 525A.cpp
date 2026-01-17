#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> key;
    int ans=0;
    for(int i=0; i<2*n-2; i++){
        if(i%2==0){
            key[s[i]-'a'+'A']++;
        }
        else{
            auto it=key.find(s[i]);
            if(it==key.end() || it->second<=0){
                ans++;
            }
            else{
                key[s[i]]--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}