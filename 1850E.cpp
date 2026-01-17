#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int sum, square, n, c, target;
bool check(int w){
    int lhs=sum*w+n*w*w;
    if(lhs<target){
        return 0;
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        vint s(n);
        for(int i=0; i<n; i++){
            cin >> s[i];
        }
        sum=0;
        square=0;
        for(int i=0; i<n; i++){
            sum+=s[i];
            square+=s[i]*s[i];
        }
        target=(c-square)/4;
        int low=1, high=sqrt(target/n);
        while(high-low>1){
            int mid=(low+high)/2;
            if(check(mid)==0){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        if(check(low)==0){
            cout << high << endl;
        }
        else{
            cout << low << endl;
        }
    }
    return 0;
}