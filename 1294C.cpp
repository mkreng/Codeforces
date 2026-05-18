#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int pw(int a, int b){
    int ans=1;
    while(b--){
        ans*=a;
    }
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ncpy=n;
        unordered_map<int, int> pf;
        while(ncpy%2==0){
            pf[2]++;
            ncpy/=2;
        }
        for(int i=3; i*i<=ncpy; i+=2){
            while(ncpy%i==0){
                pf[i]++;
                ncpy/=i;
            }
        }
        if(ncpy>2){
            pf[ncpy]++;
        }
        if(pf.size()>=3){
            cout << "YES\n";
            auto it=pf.begin();
            int a=pw(it->first, it->second);
            cout << a << " ";
            it++;
            int b=pw(it->first, it->second);
            cout << b << " " << n/(a*b) << endl;
        }
        else if(pf.size()==1){
            if(pf.begin()->second>5){
                cout << "YES\n" << pf.begin()->first << " " << pw(pf.begin()->first, 2LL) << " " << pw(pf.begin()->first, pf.begin()->second-3) << endl;
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            auto it=pf.begin();
            int a=it->first;
            it++;
            int b=it->first, c=n/(a*b);
            if(c==a || c==b || c==1){
                cout << "NO\n";
            }
            else{
                cout << "YES\n" << a << " " << b << " " << c << endl;
            }
        }
    }
    return 0;
}