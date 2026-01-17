#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> one;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                one.push_back(i);
            }
        }
        if(one.size()==0){
            cout << "0\n";
        }
        else{
            int ans=1;
            for(int i=1; i<one.size(); i++){
                if(one[i]-one[i-1]>k-1){
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}