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
        vint dn, da, db;
        while(n>0){
            dn.push_back(n%10);
            n/=10;
        }
        int temp=0;
        for(int i=0; i<dn.size(); i++){
            if(dn[i]%2==0){
                da.push_back(dn[i]/2);
                db.push_back(dn[i]/2);
            }
            else{
                if(temp%2==0){
                    da.push_back(dn[i]/2+1);
                    db.push_back(dn[i]/2);
                }
                else{
                    da.push_back(dn[i]/2);
                    db.push_back(dn[i]/2+1);
                }
                temp++;
            }
        }
        int a=0, b=0;
        temp=1;
        for(int i=0; i<da.size(); i++){
            a+=da[i]*temp;
            temp*=10;
        }
        temp=1;
        for(int i=0; i<db.size(); i++){
            b+=db[i]*temp;
            temp*=10;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}