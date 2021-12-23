#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 3) {
        cout << "-1\n";
        exit(0);
    }
    vector<pair<int,int>> edges;
    for (int i = 1; i < n; i++) {
        edges.push_back(make_pair(i, i + 1));
    }
    edges.push_back(make_pair(1,n));
    edges.push_back(make_pair(1,3));
    cout << edges.size();
    for (auto &i: edges) {
        cout << i.first << " " << i.second << "\n";
    }
}