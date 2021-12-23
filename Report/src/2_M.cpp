#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#define ll long long
using namespace std;

ll square(ll toSquare){
    return toSquare*toSquare;
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> numbers(n);
    for(int i = 0; i < n; ++i){
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    ll k = 1;
    bool stop = false;
    auto end = numbers.end();
    ll res = 0;
    for(ll i = 0; i < n; ++i){
        while(!stop){
            auto it = lower_bound(numbers.begin(), numbers.end(), k*k + 2*numbers[i]*k);
            if(it == end){
                stop = true;
                continue;
            }
            else if(*it == k*k + 2*numbers[i]*k){
                ++res;
                ++k;
                continue;
            }
            else{
                ++k;
            }
        }
        k = 1;
        stop = false;
    }
    cout << res << "\n";
    return 0;
}   