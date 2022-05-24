#include <bits/stdc++.h>

using namespace std;

int rpf(int n) {
    if (n == 1)
        return 1;
    else if (n == 2)
        return 5;
    else {
        return (n * n + rpf(n - 1));
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    while (cin >> n && n != 0) {
    }
        cout << rpf(n) << endl;

    return 0;
}
