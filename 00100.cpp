#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int i, j;
    while (cin >> i >> j){
        int input_max = max(i, j), 
            input_lim = i==input_max? j:i;
        int max = 0;
        cout << i << " " << j << " ";
        for(;input_lim<=input_max;input_lim++){
            int len = 1, n = input_lim;
            while(n!=1){
                n = n % 2 == 0 ? n / 2 : 3 * n + 1;
                len++;
            }
            max = len>max? len : max;
        }
        cout << max << endl;
    }

    return 0;
}