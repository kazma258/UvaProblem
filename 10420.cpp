#include <iostream>
#include <bits/stdc++.h>
#include <map>
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
        cout << input << endl;

        
        
        // for(int i = 0; i < map.size(); i++){
            
        // }

    }
    // for(int i = 0; i < data.size(); i++){
    //     cout << data[i] <<" "<< ccon[i]<< endl;
    // }
    return 0;
}