#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    while(cin >> n){
        bool jolly[n-1] = {false};
        int input[n];
        for (int i = 0; i < n; i++)
            cin >> input[i];
        for (int i = 1; i < n;i++){
            int temp = abs(input[i] - input[i - 1]);
            if(temp <= n) jolly[temp-1] = true;
            else break;
        }
        bool flag = true;
        for(auto i: jolly){
            if(i == false){
                cout << "Not jolly\n";
                flag = false;
                break;
            }
        }
        if(flag) cout << "Jolly\n";
    }

    return 0;
}