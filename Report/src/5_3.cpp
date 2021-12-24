#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int B;
    cin >> B;
    int n, f, m;
    int subRes;
    for(int i = 0; i < B; ++i){
        cin >> subRes >> n >> f >> m;
        if(subRes >= n + m && subRes <= n*f + m){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}