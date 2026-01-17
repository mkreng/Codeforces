#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> freq(2*n+1, 0);
        for(int i=0; i<2*n; i++){
            int temp;
            cin >> temp;
            freq[temp]++;
        }
        int odd=0, even=0;
        for(int i=0; i<freq.size(); i++){
            if(freq[i]==0){
                continue;
            }
            else if(freq[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        int ans=odd+(2*even);
        if(odd==0 && even%2!=n%2){
            ans-=2;
        }
        cout << ans << endl;
    }
    return 0;
}