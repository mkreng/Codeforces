#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vint vector<int>
#define vll vector<long long>
#define endl "\n"
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int to_be_closed=0, ans=INT_MAX;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                to_be_closed++;
            }
            else{
                to_be_closed--;
            }
            ans=min(ans, to_be_closed);
        }
        cout << ans*(-1) << endl;
    }
    return 0;
}