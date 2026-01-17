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
        vector<string> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        string s=a[0];
        for(int i=1; i<n; i++){
            string temp1=s+a[i], temp2=a[i]+s;
            if(temp1<temp2){
                s=temp1;
            }
            else{
                s=temp2;
            }
        }
        cout << s << endl;
    }
    return 0;
}