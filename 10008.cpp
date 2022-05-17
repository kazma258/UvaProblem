#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    string str;
    vector<int> counts(26, 0);
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        for (int j = 0; j < str.length(); j++) {
            if (str[j] - 'a' >= 0)
                str[j] += 'A' - 'a'; // 小寫轉大寫
            if (str[j] >= 'A' && str[j] <= 'Z')
                counts[str[j] - 'A']++; // map count
        }
    }

    while (!counts.empty()) {
        vector<int>::iterator it;
        int max = 0, pos = 0;
        for (int j = 0; j < counts.size(); j++) {
            if (max < counts[j]) {
                max = counts[j];
                pos = j;
            }
        }
        if (max == 0)
            break;
        cout << char(pos + 'A') << " " << max << endl;
        counts[pos] = 0;
    }

    return 0;
}