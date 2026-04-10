#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool u(int r, int x){
    return r*(r+1)/2<x;
}
bool d(int r, int x, int k){
    return r*(2*k-r-1)/2<x;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int k, x;
        cin >> k >> x;
        if((k+1)*k/2>=x){
            int low=0, high=k;
            while(high-low>1){
                int mid=(high+low)/2;
                if(u(mid, x)){
                    low=mid+1;
                }
                else{
                    high=mid;
                }
            }
            if(!u(low, x)){
                cout << low << endl;
            }
            else{
                cout << high << endl;
            }
        }
        else{
            x-=k*(k+1)/2;
            int low=0, high=k-1;
            while(high-low>1){
                int mid=(high+low)/2;
                if(d(mid, x, k)){
                    low=mid+1;
                }
                else{
                    high=mid;
                }
            }
            if(!d(low, x, k)){
                cout << low+k << endl;
            }
            else{
                cout << high+k << endl;
            }
        }
    }
    return 0;
}