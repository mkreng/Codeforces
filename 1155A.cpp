#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vint vector<int>
#define vll vector<long long>
#define endl "\n"
int main(){
    int n;
    cin >> n;
    string s, temp;
    cin >> s;
    temp=s;
    sort(temp.begin(), temp.end());
    if(temp==s){
        cout << "NO\n";
    }
    else{
        vector<pair<char, int>> data(n);
        for(int i=0; i<n; i++){
            data[i].first=s[i];
            data[i].second=i+1;
        }
        sort(data.begin(), data.end());
        for(int i=0; i<n-1; i++){
            if(data[i].first!=data[i+1].first && data[i].second>data[i+1].second){
                cout << "YES\n" << data[i+1].second << " " << data[i].second << endl;
                break;
            }
        }
    }
    return 0;
}