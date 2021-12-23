#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool put(vector<int> &vec, vector<bool> &used) {

    for (int j = 0; j < vec.size(); ++j) {
        if (vec[0] < vec[j] && used[j] == false) {
            vec.erase(vec.begin());
            used[j] = true;
            used.erase(used.begin());
            return true;
        }  
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<bool> used(n, false);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    stable_sort(vec.begin(), vec.end());
    while (put(vec, used));
    cout << vec.size();
    
}