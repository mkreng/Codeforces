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
        char c;
        cin >> c;
        string s;
        cin >> s;
        bool allc=true;
        for(int i=0; i<n; i++){
            if(s[i]!=c){
                allc=false;
            }
        }
        if(allc){
            cout << "0\n";
        }
        else{
            for(int i=1; i<=n; i++){
                bool allmultiplec=true;
                for(int j=i-1; j<n; j+=i){
                    if(s[j]!=c){
                        allmultiplec=false;
                        break;
                    }
                }
                if(allmultiplec){
                    cout << "1\n" << i << endl;
                    goto next;
                }
            }
            cout << "2\n" << n-1 << " " << n << endl;
            next:
        }
    }
    return 0;
}