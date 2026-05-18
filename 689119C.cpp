#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vint q;
    int sum=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='?'){
            q.push_back(i);
        }
        else{
            sum+=s[i]-'0';
        }
    }
    sum%=3;
    if(s=="?"){
        cout << "0\n";
    }
    else if(q.size()==0){
        if(sum%3){
            cout << "-1\n";
        }
    }
    else if(s[0]!='?'){
        for(int i=0; i<q.size()-1; i++){
            s[q[i]]='0';
        }
        if(sum){
            s[q[q.size()-1]]='0'+3-sum;
        }
        else{
            s[q[q.size()-1]]='0';
        }
        cout << s << endl;
    }
    else{
        if(q.size()==1){
            s[q[q.size()-1]]='0'+3-sum;
        }
        else{
            s[0]='1';
            sum++;
            sum%=3;
            for(int i=1; i<q.size()-1; i++){
                s[q[i]]='0';
            }
            if(sum){
                s[q[q.size()-1]]='0'+3-sum;
            }
            else{
                s[q[q.size()-1]]='0';
            }
        }
        cout << s << endl;
    }
    return 0;
}