#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int input[2];
    // int testhack = 0;
    while (true) {
        // testhack++;
        int tot = 0, carry = 0;
        for (int i = 0; i < 2; i++)
            cin >> input[i];
        if (input[0] == 0 && input[1] == 0)
            return 0;

        // if(testhack == 900) cout << input[0]<<" "<<input[1];
        while (input[0] > 0 || input[1] > 0) {
            carry = ((input[0] % 10) + (input[1] % 10) + carry) / 10;
            tot += carry;
            input[0] /= 10;
            input[1] /= 10;
        }

        if (tot == 0)
            cout << "No carry operation.\n";
        else if (tot == 1)
            cout << "1 carry operation.\n";
        else
            cout << tot << " carry operations.\n";
    }

    return 0;
}