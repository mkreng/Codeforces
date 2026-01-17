#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int required_b=0, required_s=0, required_c=0, nb, ns, nc, pb, ps, pc, r;
bool check(int h){
    int b_needed=required_b*h, s_needed=required_s*h, c_needed=required_c*h;
    return max(0LL, b_needed-nb)*pb+max(0LL, s_needed-ns)*ps+max(0LL, c_needed-nc)*pc<=r;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='B'){
            required_b++;
        }
        if(s[i]=='S'){
            required_s++;
        }
        if(s[i]=='C'){
            required_c++;
        }
    }
    int low=0, high=1e13;
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid)){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    if(check(high)){
        cout << high << endl;
    }
    else{
        cout << low << endl;
    }
    return 0;
}