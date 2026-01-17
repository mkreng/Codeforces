#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    int left_open=0, right_open=0;
    for(int i=0; i<n; i++){
        int l, r;
        cin >> l >> r;
        if(l==1){
            left_open++;
        }
        if(r==1){
            right_open++;
        }
    }
    int x=min(n-left_open, left_open);
    int y=min(n-right_open, right_open);
    cout << x+y << endl;
    return 0;
}