#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    while(cin >> n && n!= -1){
        long int a=0, b=1;
        while(n--) {
            int current_a = a;
            a += b;
            b = current_a+1;
        }
        cout << a << " " << a+b << endl;
    }

    return 0;
}