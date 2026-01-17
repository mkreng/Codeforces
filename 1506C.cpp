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
        string a, b;
        cin >> a >> b;
        int max_common_length=0;
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                int temp=0, common_length=0;
                while(i+temp<a.size() && j+temp<b.size() && a[i+temp]==b[j+temp]){
                    common_length++;
                    temp++;
                }
                max_common_length=max(max_common_length, common_length);
            }
        }
        cout << a.size()+b.size()-2*max_common_length << endl;
    }
    return 0;
}