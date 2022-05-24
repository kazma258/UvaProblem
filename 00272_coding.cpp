#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    string str;
    while(true) {}
    while (getline(cin, str) && !cin.eof()) {
        bool flaga = false, flagb = false;
        for (int i = 0; i < str.length(); i++) {
            if(str[i] == '\"'){
                if(!flaga) cout << "``";
                else cout << "\'\'";
                flaga = !flaga;
            }else if(str[i] == '\''){
                if(!flagb) cout << "`";
                else cout << "\'";
                flagb = !flagb;
            }else cout << str[i];
        }
        cout << endl;
    }

    return 0;
}
