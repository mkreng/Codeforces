#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t1, t2;
    cin >> t1 >> t2;
    int h1=10*(t1[0]-'0')+(t1[1]-'0');
    int m1=10*(t1[3]-'0')+(t1[4]-'0');
    int h2=10*(t2[0]-'0')+(t2[1]-'0');
    int m2=10*(t2[3]-'0')+(t2[4]-'0');
    int add=((h2*60+m2)-(h1*60+m1))/2;
    m1+=add;
    while(m1>59){
        h1++;
        m1-=60;
    }
    if(h1<=9){
        cout << "0";
    }
    cout << h1 << ":";
    if(m1<=9){
        cout << "0";
    }
    cout << m1 << endl;
    return 0;
}