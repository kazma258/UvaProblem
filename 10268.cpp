#include <bits/stdc++.h>

using namespace std;

vector<int> sp(string data) {
    vector<int> result;
    while (!data.empty()) {
        auto it = data.find(" ");
        stringstream ss(data.substr(0, it));
        int toInt;
        ss >> toInt;
        result.push_back(toInt);
        data.erase(0, it + 1);
    }
    return result;
}

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int x;
    while (cin >> x) {
        cin.ignore();
        string input; // original input
        getline(cin, input);
        vector<int> split = sp(input);
        split.pop_back();
        reverse(split.begin(), split.end());
        int tot = 0, t = 1;
        for(int i = 0; i< split.size(); i++){
            tot += split[i]*(i+1)*t;
            t*=x;
        }
        cout << tot << endl;
    }

    return 0;
}
