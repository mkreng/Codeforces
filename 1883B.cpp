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
        vint freq(26, 0);
        for(int i=0; i<n; i++){
            freq[s[i]-'a']++;
        }
        int odd=0;
        for(int i=0; i<26; i++){
            if(freq[i]%2!=0){
                odd++;
            }
        }
        if(max(0, odd-k)<=(n-k)%2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}