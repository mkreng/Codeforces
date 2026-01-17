#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    int mismatchfour=0, mismatchseven=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]){
            if(a[i]=='4'){
                mismatchfour++;
            }
            else{
                mismatchseven++;
            }
        }
    }
    int swap=min(mismatchfour, mismatchseven);
    mismatchfour-=swap;
    mismatchseven-=swap;
    cout << swap+mismatchfour+mismatchseven << endl;
    return 0;
}