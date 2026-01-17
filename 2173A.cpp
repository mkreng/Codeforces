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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans=0, temp=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                temp=max(temp, i+k+1);
            }
            else{
                if(i>=temp){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}