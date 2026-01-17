#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i=0; i<m; i++){
        cin >> a[i];
    }
    sort(a, a+m);
    int temp[m];
    copy(a, a+m, temp);
    int max=0, min=0;
    int x=n;
    while(n--){
        for(int i=0; i<m; i++){
            while(a[i]>0 && x>0){
                min+=a[i];
                a[i]--;
                x--;
            }
        }
        max+=temp[m-1];
        temp[m-1]--;
        sort(temp, temp+m);
    }
    cout << max << " " << min << endl;
    return 0;
}