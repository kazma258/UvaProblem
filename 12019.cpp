#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    // 計算 4/4 is mon that 1/1 -> 31+28+31+3%7 = wed
    string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int days[] = {0,31,59,90,120,151,181,212,243,273,304,334};
    int n;
    cin >> n;
    while(n--){
        int month, day;
        cin >> month >> day;
        int con_day = days[month-1] + day+4;
        cout << week[con_day%7] << endl;
    }

    return 0;
}