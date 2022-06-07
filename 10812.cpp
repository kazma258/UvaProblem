#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        // cout << 
        if( (a+b)&1 || a < b) //奇數判斷, A是否小於B
            cout << "impossible\n";
        else cout << (a+b)/2 << " " << (a-b)/2 << "\n";
    } 

    return 0;
}