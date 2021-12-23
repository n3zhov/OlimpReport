#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    vector<int> result;
    int start;
    for (int i = 0; i < m; ++i) {
        start = b[i];
        for (int j = 0; j < start - 1; ++j) {
            ++i;
        }
        result.push_back(start);
    }
    for (auto i : result) {
        cout << i << ' ';
    }
}