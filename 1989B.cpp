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
        string a, b;
        cin >> a >> b;
        int maxlen=-1;
        for(int i=0; i<b.size(); i++){
            int len=0, j=i, k=0;
            while(j<b.size() && k<a.size()){
                if(b[j]==a[k]){
                    len++;
                    j++;
                }
                k++;
            }
            maxlen=max(maxlen, len);
        }
        cout << a.size()+b.size()-maxlen << endl;
    }
    return 0;
}