#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> name(n);
    vector<pair<int, int>> taxi(n, {0, 0}), pizza(n, {0, 0}), girls(n, {0, 0});
    for(int i=0; i<n; i++){
        int s;
        cin >> s >> name[i];
        taxi[i].second=i;
        pizza[i].second=i;
        girls[i].second=i;
        while(s--){
            string temp;
            cin >> temp;
            string number="";
            for(int j=0; j<temp.size(); j++){
                if(temp[j]!='-'){
                    number.push_back(temp[j]);
                }
            }
            bool taxinumber=true, pizzanumber=true;
            for(int j=0; j<number.size()-1; j++){
                if(number[j+1]!=number[j]){
                    taxinumber=false;
                }
                if(number[j+1]>=number[j]){
                    pizzanumber=false;
                }
            }
            if(taxinumber){
                taxi[i].first++;
            }
            else if(pizzanumber){
                pizza[i].first++;
            }
            else{
                girls[i].first++;
            }
        }
    }
    sort(taxi.begin(), taxi.end(), greater<>());
    sort(pizza.begin(), pizza.end(), greater<>());
    sort(girls.begin(), girls.end(), greater<>());
    cout << "If you want to call a taxi, you should call: ";
    vint taxiperson;
    for(int i=0; i<n; i++){
        if(taxi[i].first==taxi[0].first){
            taxiperson.push_back(taxi[i].second);
        }
    }
    sort(taxiperson.begin(), taxiperson.end());
    for(int i=0; i<taxiperson.size(); i++){
        if(i==0){
            cout << name[taxiperson[i]];
        }
        else{
            cout << ", " << name[taxiperson[i]];
        }
    }
    cout << ".\n";
    cout << "If you want to order a pizza, you should call: ";
    vint pizzaperson;
    for(int i=0; i<n; i++){
        if(pizza[i].first==pizza[0].first){
            pizzaperson.push_back(pizza[i].second);
        }
    }
    sort(pizzaperson.begin(), pizzaperson.end());
    for(int i=0; i<pizzaperson.size(); i++){
        if(i==0){
            cout << name[pizzaperson[i]];
        }
        else{
            cout << ", " << name[pizzaperson[i]];
        }
    }
    cout << ".\n";
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    vint girlsperson;
    for(int i=0; i<n; i++){
        if(girls[i].first==girls[0].first){
            girlsperson.push_back(girls[i].second);
        }
    }
    sort(girlsperson.begin(), girlsperson.end());
    for(int i=0; i<girlsperson.size(); i++){
        if(i==0){
            cout << name[girlsperson[i]];
        }
        else{
            cout << ", " << name[girlsperson[i]];
        }
    }
    cout << ".\n";
    return 0;
}