#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int s;
    long long d;
    while (cin >> s >> d) {
        while (d >= 0 && d > s) {
            d -= s;
            s++;
        }
        cout << s << endl;
    }

    return 0;
}
