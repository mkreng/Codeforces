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
        int two=0, three=0;
        while(n%2==0){
            two++;
            n/=2;
        }
        while(n%3==0){
            three++;
            n/=3;
        }
        if(n!=1 || (n==1 && two>three)){
            cout << "-1\n";
        }
        else{
            cout << 2*three-two << endl;
        }
    }
    return 0;
}