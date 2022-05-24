#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    string input;
    while (getline(cin, input)) {
        map<char, int> count;
        while (!input.empty()) {
            if (count.find(input.back()) != count.end())
                count[input.back()]++;
            else
                count.insert(make_pair(input.back(), 1));
            input.pop_back();
        }
        while (!count.empty()) {
            int min_value = INT_MAX;
            int arg_min = 0;
            for(auto i = count.rbegin(); i != count.rend(); ++i) {
                if(i->second < min_value){
                    min_value = i->second;
                    arg_min = i->first;
                }         
            }
            cout << arg_min << " " << min_value << endl;
            count.erase(count.find(arg_min));
        }
        cout << endl;
    }

    return 0;
}