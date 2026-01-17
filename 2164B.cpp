#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n), even, odd;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2==0){
                even.push_back(a[i]);
            }
            else{
                odd.push_back(a[i]);
            }
        }
        bool ans=false;
        if(even.size()>=2){
            ans=true;
            cout << even[0] << " " << even[1] << endl;
        }
        else if(even.size()!=0){
            for(ll i=0; i<odd.size(); i++){
                if(ans==true){
                    break;
                }
                if(odd[i]<even[0] && (even[0]%odd[i])%2==0){
                    ans=true;
                    cout << odd[i] << " " << even[0] << endl;
                    break;
                }
            }
        }
        if(ans==false && odd.size()>=2){
            for(ll i=0; i<odd.size(); i++){
                if(ans==true){
                    break;
                }
                for(ll j=i+1; j<odd.size(); j++){
                    if((odd[j]%odd[i])%2==0){
                        ans=true;
                        cout << odd[i] << " " << odd[j] << endl;
                        break;
                    }
                }
            }
        }
        if(ans==false){
            cout << "-1\n";
        }
    }
    return 0;
}