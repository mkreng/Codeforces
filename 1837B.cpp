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
        int ans=1, len=1;
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                len++;
            }
            else{
                ans=max(ans, len);
                len=1;
            }
        }
        ans=max(ans, len);
        cout << ans+1 << endl;
    }
    return 0;
}