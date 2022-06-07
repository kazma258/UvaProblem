#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, num;
    cin >> n;
    while (n--){
        cin >> num;
        // to hex
        string str = "";
        bitset<14> int2bin(num);
        while (num > 0) {
            bitset<4> bits(num%10);
            str.insert(0, bits.to_string());
            num /= 10;
        }
        // hex(9999) to binary has 16 bits
        bitset<16> str2bin(str);
        cout << int2bin.count() << " " << str2bin.count() << "\n";
    }

    return 0;
}