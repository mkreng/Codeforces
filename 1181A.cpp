#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    cout << (x+y)/z << " ";
    if((x+y)/z==x/z+y/z){
        cout << "0\n";
    }
    else{
        cout << min(z-(x%z), z-(y%z)) << endl;
    }
    return 0;
}