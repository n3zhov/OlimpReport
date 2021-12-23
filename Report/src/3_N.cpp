#include <iostream>
#define ll long long
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    ll input;
    ll res = 0;
    while(cin >> n){
        res = 0;
        for(int i = 0; i < n; ++i){
            cin >> input;
            res ^= input;
        }
        if(!res){
            cout << "Lose\n";
        }
        else{
            cout << "Win\n";
        }
    }
    return 0;
}