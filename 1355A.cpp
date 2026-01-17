#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool hasZero(int n){
    int digit=-1;
    while(n!=0){
        digit=n%10;
        n/=10;
        if(digit==0){
            return true;
        }
    }
    return false;
}
int nextTerm(int n){
    int n_copy=n;
    vint digits;
    while(n!=0){
        digits.push_back(n%10);
        n/=10;
    }
    return n_copy+(*min_element(digits.begin(), digits.end()))*(*max_element(digits.begin(), digits.end()));
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a, k;
        cin >> a >> k;
        k--;
        while(k--){
            if(hasZero(a)){
                break;
            }
            a=nextTerm(a);
        }
        cout << a << endl;
    }
    return 0;
}