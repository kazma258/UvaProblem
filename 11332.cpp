#include <bits/stdc++.h>

using namespace std;

int solve(string str) {
    int tot = 0;
    while (!str.empty()) {
        tot += str.back() - '0';
        str.pop_back();
    }
    if (tot >= 10)
        return solve(to_string(tot));
    else
        return tot;
}
int main() {
    int n;
    while (cin >> n && n != 0)
        cout << solve(to_string(n)) << endl;

    return 0;
}