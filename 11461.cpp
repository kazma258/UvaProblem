#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(0);

    int start =0, end=0;
    while (cin >> start >> end) {
        if ((start == end) && (start==0)) break;;
        int con = 0;
        while (start <= end) {
            int temp = double(sqrt(start)+0.5);
            if(temp * temp == start) con++;
            start++;
        }
        cout << con << "\n";
    }

    return 0;
}