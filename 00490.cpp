#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    vector<string> s;
    string input;
    while (getline(cin, input)){
        s.push_back(input);
    }
    int max = 0;
    for(int i = 0; i < s.size();i++) {
        if(s[i].size() > max) max = s[i].size();
    }

    for(int index=0; index < max; index++) {
        for(int i = s.size()- 1; i >= 0; i--) {
            if(index >= s[i].size()) cout << " ";
            else cout << s[i][index];
        }
        cout << endl;
    }
    
    return 0;
}