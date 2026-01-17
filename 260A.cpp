#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a, b, n;
    cin >> a >> b >> n;
    int digit=(b-((10*a)%b))%b;
    if(digit>9){
        cout << "-1\n";
        return 0;
    }
    else{
        a=a*10+digit;
        n--;
        cout << a;
        while(n--){
            cout << "0";
        }
    }
    cout <<endl;
    return 0;
}