#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n<=2){
        cout << "No\n";
    }
    else{
        int temp=(n+1)/2;
        if(n%2==0){
            temp=n/2;
        }
        cout << "Yes\n" << "1 " << temp << endl << n-1 << " ";
        for(int i=1; i<=n; i++){
            if(i!=temp){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}