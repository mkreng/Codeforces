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
        vint a(n), odd, even;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2==0){
                even.push_back(a[i]);
            }
            else{
                odd.push_back(a[i]);
            }
        }
        sort(odd.begin(), odd.end(), greater<>());
        sort(even.begin(), even.end(), greater<>());
        vint prefix(even.size()+1, 0), ans(n, 0);
        for(int i=1; i<=even.size(); i++){
            prefix[i]=prefix[i-1]+even[i-1];
        }
        if(odd.size()!=0){
            for(int i=1; i<=n; i++){
                int temp=even.size();
                int max_even=min(i-1, temp), final_score=0;
                for(int j=max_even; j>=0; j--){
                    int waste=i-1-j, odd_left=odd.size()-1, even_left=even.size()-j;
                    int min_odd=max(0LL, waste-even_left), max_odd=min(waste, odd_left);
                    if(min_odd<=max_odd){
                        if(min_odd%2==0 || max_odd-min_odd>=1){
                            int score=odd[0]+prefix[j];
                            final_score=score;
                            break;
                        }
                    }
                }
                ans[i-1]=final_score;
            }
        }
        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}