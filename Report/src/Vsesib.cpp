#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> &vec) {
    int t1 = -1, t2 = -1, t3 = -1, j = 0;
    while (j < vec.size() - 1 && vec[j] == vec[j + 1]) {
        j++;
    }
    t1 = j + 1;
    while (j < vec.size() - 1 && vec[j] < vec[j + 1]) {
        j++;
    }
    t2 = j + 1;
    while (j < vec.size() - 1 && vec[j] > vec[j+1]) {
        ++j;
    }
    t3 = j + 1;
    while (j < vec.size() - 1&& vec[j] == vec[j + 1]) {
        j++;
    }
    if (j != vec.size() - 1 || t1 == t2 || t2 == t3 || t1 == t3) {
        cout << "Nein\n";
    } else {
        cout << "Freytag " << t1 << ' ' << t2 << ' ' << t3 << '\n';
    }
}

int main() {
    int d, q;
    
    cin >> d;
    for (int i = 0; i < d; ++i) {
        cin >> q;
        vector<int> vec(q);
        for (int j = 0; j < q; ++j) {
            cin >> vec[j];
        }
        solve(vec);
    }
}