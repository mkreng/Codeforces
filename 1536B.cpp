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
        set<string> ans;
        for(int i=0; i<n; i++){
            string temp;
            for(int j=0; j<3 && i+j<n; j++){
                temp.push_back(s[i+j]);
                ans.insert(temp);
            }
        }
        bool exit=false;
        for(int i=1; i<6; i++){
            if(exit){
                break;
            }
            string t(i, 'a');
            while(1){
                if(ans.count(t)==0){
                    cout << t << endl;
                    exit=true;
                    break;
                }
                int index=i-1;
                while(index>=0 && t[index]=='z'){
                    t[index]='a';
                    index--;
                }
                if(index<0){
                    break;
                }
                t[index]++;
            }
        }
    }
    return 0;
}