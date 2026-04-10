#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--){
        string y;
        cin >> y;
        bool zero=false, even=false;
        int sum=0;
        for(int i=0; i<y.size(); i++){
            if(!zero && y[i]=='0'){
                zero=true;
            }
            else if((y[i]-'0')%2==0){
                even=true;
            }
            sum+=y[i]-'0';
        }
        if(sum%3==0 && zero && even){
            cout << "red\n";
        }
        else{
            cout << "cyan\n";
        }
    }
    return 0;
}