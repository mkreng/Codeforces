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
        int n, k, x;
        cin >> n >> k >> x;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int array_sum=accumulate(a.begin(), a.end(), 0LL), array_required=x/array_sum, left_sum=x%array_sum;
        if(array_required>k || (array_required==k && left_sum!=0)){
            cout << "0\n";
        }
        else{
            int array_left=k-array_required;
            if(left_sum==0){
                cout << n*array_left+1 << endl;
            }
            else{
                int sum=0, index=-1;
                for(int i=n-1; i>=0; i--){
                    sum+=a[i];
                    if(sum>=left_sum){
                        index=i+1;
                        break;
                    }
                }
                cout << index+(max(array_left-1, 0LL))*n << endl;
            }
        }
    }
    return 0;
}