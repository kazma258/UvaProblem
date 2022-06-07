#include <bits/stdc++.h>

using namespace std;

bool check(long long int *martix, int &n){
    for(int i = 0; i <n*n/2+1; i++){ // 回文檢測
        if(martix[i] != martix[n*n-i-1] || martix[i] < 0) return false;
    }
    return true;
}

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin.ignore(10, ' '); // 題目爛 亂給沒必要的資料
        cin.ignore(10, ' ');
        cin >> n;
        long long int martix[n*n];
        for(int j = 0; j < n*n; j++){
            if (cin.peek() == ' ') cin.ignore();
            cin >> martix[j];
        cout << "Test #" << i+1;
        if(check(martix, n)) cout << ": Symmetric.\n";
        else cout << ": Non-symmetric.\n";
    }

    return 0;
}