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
        vint z, o;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                z.push_back(i+1);
            }
            else{
                o.push_back(i+1);
            }
        }
        if(o.size()%2==0){
            cout << o.size() << endl;
            for(auto i:o){
                cout << i << " ";
            }
            cout << endl;
        }
        else if(z.size()%2){
            cout << z.size() << endl;
            for(auto i:z){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}