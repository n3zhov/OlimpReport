#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        vector<bool> used(10, false);
        for (int j = 0; j < s.size(); ++j) {
            used[(s[j] - '0')] = true;
        }
        vector<int> ans(0);
        for (int j = 0; j < used.size(); ++j) {
            if (!used[j]) {
                ans.push_back(j);
            }
        }
        if (ans.empty()) {
            cout << "full\n";
        }
        else {
            for (auto &i : ans) {
                cout << i;
            }
        }
        cout << '\n';
    }

}