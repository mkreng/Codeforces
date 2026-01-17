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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x=0, y=n-1;
        while(s[x]==s[y] && x<y){
            x++;
            y--;
        }
        if(!(x<y)){
            cout << "0\n";
        }
        else{
            char removedx=s[x], removedy=s[y];
            int xcpy=x+1, ycpy=y, ansx=1, ansy=1;
            y--;
            bool remx=true, remy=true;
            while(xcpy<ycpy){
                while(s[xcpy]==s[ycpy] && xcpy<ycpy){
                    xcpy++;
                    ycpy--;
                }
                if(!(xcpy<ycpy)){
                    break;
                }
                if(s[xcpy]==removedx){
                    xcpy++;
                    ansx++;
                }
                else if(s[ycpy]==removedx){
                    ycpy--;
                    ansx++;
                }
                else{
                    remx=false;
                    break;
                }
            }
            while(x<y){
                while(s[x]==s[y] && x<y){
                    x++;
                    y--;
                }
                if(!(x<y)){
                    break;
                }
                if(s[x]==removedy){
                    x++;
                    ansy++;
                }
                else if(s[y]==removedy){
                    y--;
                    ansy++;
                }
                else{
                    remy=false;
                    break;
                }
            }
            if(!remx && !remy){
                cout << "-1\n";
            }
            else if(remx && !remy){
                cout << ansx << endl;
            }
            else if(!remx && remy){
                cout << ansy << endl;
            }
            else{
                cout << min(ansx, ansy) << endl;
            }
        }
    }
    return 0;
}