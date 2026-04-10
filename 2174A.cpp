#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        vint l(26, 0);
        for(int i=0; i<b.size(); i++){
            l[b[i]-'a']++;
        }
        bool ans=true;
        for(int i=0; i<a.size(); i++){
            l[a[i]-'a']--;
            if(l[a[i]-'a']<0){
                ans=false;
                break;
            }
        }
        if(ans){
            int j=0, k=0;
            while(j<26 && k<a.size()){
                if('a'+j<a[k]){
                    while(l[j]--){
                        char temp='a'+j;
                        cout << temp;
                    }
                    j++;
                }
                else{
                    cout << a[k];
                    k++;
                }
            }
            if(j==26){
                for(int i=k; i<a.size(); i++){
                    cout << a[i];
                }
            }
            else{
                for(int i=j; i<26; i++){
                    while(l[i]--){
                        char temp='a'+i;
                        cout << temp;
                    }
                }
            }
            cout << endl;
        }
        else{
            cout << "Impossible\n";
        }
    }
    return 0;
}