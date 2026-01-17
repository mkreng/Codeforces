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
        int n, k;
        cin >> n >> k;
        if(n%2==0 && k%2==1){
            int temp=n-(k-1)*2;
            if(temp>0 && temp%2==0){
                cout << "YES\n";
                for(int i=0; i<k-1; i++){
                    cout << "2 ";
                }
                cout << temp << endl;
            }
            else{
                cout << "NO\n";
            }
        }
        if(n%2==0 && k%2==0){
            int temp=n-(k-1);
            if(temp>0 && temp%2==1){
                cout << "YES\n";
                for(int i=0; i<k-1; i++){
                    cout << "1 ";
                }
                cout << temp << endl;
            }
            else{
                cout << "NO\n";
            }
        }
        if(n%2==1 && k%2==0){
            cout << "NO\n";
        }
        if(n%2==1 && k%2==1){
            int temp=n-(k-1);
            if(temp>0 && temp%2==1){
                cout << "YES\n";
                for(int i=0; i<k-1; i++){
                    cout << "1 ";
                }
                cout << temp << endl;
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}