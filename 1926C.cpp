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
    vint sum(7, 0);
    for(int i=1; i<7; i++){
        int temp=1;
        for(int j=0; j<i-1; j++){
            temp*=10;
        }
        sum[i]=i*45*temp;
    }
    while(t--){
        int n;
        cin >> n;
        vint digits;
        while(n>0){
            digits.push_back(n%10);
            n/=10;
        }
        reverse(digits.begin(), digits.end());
        int length=digits.size(), ans=0, prefix=0;
        for(int i=0; i<length; i++){
            int temp=1;
            for(int j=0; j<length-i-1; j++){
                temp*=10;
            }
            for(int j=0; j<digits[i]; j++){
                ans+=sum[length-i-1]+(j+prefix)*temp;
            }
            prefix+=digits[i];
        }
        ans+=prefix;
        cout << ans << endl;
    }
    return 0;
}