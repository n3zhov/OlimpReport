#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
#define ll long long
int main(){
    map<ll, int> poses;
    
    int n;
    cin >> n;
    vector <ll> helpVector(n);
    vector <ll> numbers(n);
    cin >> numbers[0];
    helpVector[0] = numbers[0];
    poses[numbers[0]] = 0;
    int maxLen = 0;
    if(helpVector[0] == 0){
        maxLen = 1;
    }
    for(int i = 1; i < n; ++i){
        cin >> numbers[i];
        helpVector[i] = helpVector[i-1] + numbers[i];
        if(helpVector[i] == 0){
            maxLen = max(maxLen, i+1);
        }
        else if(poses.find(helpVector[i]) == poses.end()){
            poses[helpVector[i]] = i;
        }
        else{
            maxLen = max(maxLen, i - poses[helpVector[i]]);
        }
    }
    cout << maxLen << "\n";
    return 0;
}   