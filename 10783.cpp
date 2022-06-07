#include <iostream>

// using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, a, b;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        a += a%2 == 0? 1: 0;
        b -= b%2 == 0? 1: 0;
        printf("Case %d: %d\n", i+1, ((b - a)/2+1)* (a+ b) /2);
    }

    return 0;
}