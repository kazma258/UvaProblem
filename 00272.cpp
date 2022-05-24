#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    string str;
    bool flaga = false, flagb = false;
    while (getline(cin, str)) {
        for (int i = 0; i < str.length(); i++) {
            if(str[i] == '\"'){
                if(!flaga) cout << "``";
                else cout << "\'\'";
                flaga = !flaga;
            }else cout << str[i];
        }
        cout << endl;
    }

    return 0;
}
