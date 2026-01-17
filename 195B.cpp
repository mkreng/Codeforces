#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if(m%2==1){
        int printed=0, dis=0, middle=(m+1)/2;
        for(int i=0; printed<n; i++){
            int toprint=middle;
            if(i%2==1){
                toprint-=dis;
                if(toprint==0){
                    dis=0;
                    continue;
                }
            }
            else{
                toprint+=dis;
                dis++;
            }
            cout << toprint << endl;
            printed++;
        }
    }
    else{
        int printed=0, dis=0, middle=m/2;
        for(int i=0; printed<n; i++){
            int toprint=middle;
            if(i%2==0){
                toprint-=dis;
                dis++;
                if(toprint==0){
                    dis=0;
                    i=-1;
                    continue;
                }
            }
            else{
                toprint+=dis;
            }
            cout << toprint << endl;
            printed++;
        }
    }
    return 0;
}