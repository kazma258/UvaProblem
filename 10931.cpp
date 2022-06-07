#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    while((cin >> n) && (n!= 0)) {
        bitset<32> bits = n;
        int msb = 30; // bits 最高有效位
        while (bits[msb] != 1) msb--; // 去除無效位數
        cout << "The parity of ";
        for(; msb>=0; msb--)
            cout << bits[msb];
        cout << " is " << bits.count() << " (mod 2).\n";
    }

    return 0;
}