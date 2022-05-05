#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int door;
        cin >> door;
        vector<int> v(door);
        for (int j = 0; j < door; j++)
            cin >> v.at(j);
        sort(v.begin(), v.end());
        double mid = v.size() / 2;
        int total = 0;
        for (int i = 0; i < v.size(); i++) {
            total += abs(v.at(i) - v.at(mid));
        }
        cout << total << endl;
    }

    return 0;
}