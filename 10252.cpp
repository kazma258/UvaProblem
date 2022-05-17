#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    vector<string> str(2);
    while(cin >> str[0]>> str[1]) {
        vector<char> ans;
        int i = 0;
        while(i<str[0].size() &&!str[1].empty()) {
            auto it = str[1].find(str[0][i]);
            if(it != str[1].npos) {
                ans.push_back(str[0][i]);
                str[0].erase(i, 1);
                str[1].erase(it, 1);
                continue;
            }
            i++;
        }
        sort(ans.begin(), ans.end());
        for(auto ch: ans) {
            cout << ch;
        }cout << endl;
    }

    return 0;
}