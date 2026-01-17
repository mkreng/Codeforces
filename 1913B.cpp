#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int one=0, zero=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                zero++;
            }
        }
        int placed=0;
        for(int i=0; i<s.size(); i++){
            if((s[i]=='1' && zero==0) || (s[i]=='0' && one==0)){
                break;
            }
            if(s[i]=='1'){
                zero--;
            }
            if(s[i]=='0'){
                one--;
            }
            placed++;
        }
        cout << s.size()-placed << endl;
    }
    return 0;
}