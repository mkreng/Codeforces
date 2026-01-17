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
    vint digits;
    while(n>0){
        digits.push_back(n%10);
        n/=10;
    }
    reverse(digits.begin(), digits.end());
    int ans=1;
    for(int i=0; i<digits.size()-1; i++){
        ans*=2;
    }
    ans=(ans-1)*2;
    if(digits.size()==1){
        ans=0;
    }
    for(int i=0; i<digits.size(); i++){
        if(digits[i]==7){
            int temp=1;
            for(int j=0; j<digits.size()-i-1; j++){
                temp*=2;
            }
            ans+=temp;
        }
    }
    ans++;
    cout << ans << endl;
    return 0;
}