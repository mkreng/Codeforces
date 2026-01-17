#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    int m;
    cin >> m;
    vector<int> b;
    for(int i=0; i<m; i++){
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    int gear=0, ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(b[m-1-j]%a[i]==0 && b[m-1-j]/a[i]>gear){
                gear=b[m-1-j]/a[i];
                ans=1;
                break;
            }
            if(b[m-1-j]%a[i]==0 && b[m-1-j]/a[i]==gear){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}