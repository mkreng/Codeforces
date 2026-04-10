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
        string srt=s;
        sort(srt.begin(), srt.end());
        if(s==srt){
            cout << "Bob\n";
        }
        else{
            cout << "Alice\n";
            vint ans;
            for(int i=0; i<s.size(); i++){
                if(s[i]!=srt[i]){
                    ans.push_back(i+1);
                }
            }
            cout << ans.size() << endl;
            for(auto i:ans){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}