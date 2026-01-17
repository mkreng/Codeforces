#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int n, k;
bool check(int s){
    int n_copy=n, to_sub=k-1;
    int h_i=k-1, l_i=max(0LL, k-s);
    int sum_h_i=(k*(k-1))/2, sum_l_i=(l_i*(l_i-1))/2;
    n_copy-=sum_h_i-sum_l_i;
    return n_copy<=1;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    if((k*(k-1))/2+1<n){
        cout << "-1\n";
    }
    else{
        int low=0, high=k-1;
        while(high-low>1){
            int mid=(high+low)/2;
            if(check(mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        if(check(low)){
            cout << low << endl;
        }
        else{
            cout << high << endl;
        }
    }
    return 0;
}