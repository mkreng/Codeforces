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
        int zero=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                zero++;
            }
        }
        int one=n-zero;
        string srt="";
        while(zero--){
            srt.push_back('0');
        }
        while(one--){
            srt.push_back('1');
        }
        if(s==srt){
            cout << "Bob\n";
        }
        else{
            cout << "Alice\n";
            int m=0;
            vint idx;
            for(int i=0; i<n; i++){
                if(s[i]!=srt[i]){
                    m++;
                    idx.push_back(i+1);
                }
            }
            cout << m << endl;
            for(auto i:idx){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}