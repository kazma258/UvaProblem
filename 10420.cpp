#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    cin >> n;
    map<string, int> mmap;
    map<string, int>::iterator iter;
    string input;
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, input);
        input = input.substr(0, input.find(' '));
        // cout << input << endl;
        if(mmap.find(input) != mmap.end()){
            mmap[input]++;
        }else{
            mmap[input] = 1;
        }

    }
    for(auto i: mmap) {
        cout << i.first <<" "<< i.second << endl;
    }
    return 0;
}