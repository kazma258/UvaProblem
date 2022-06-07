#include <bits/stdc++.h>

using namespace std;

int check(int &max, int &sum){
    for(int i = max; i <= 62; i++) {
        if(!(sum%i)){
            cout << i+1 << "\n";
            return 0;
        }
    }
    cout << "such number is impossible!\n";
    return 0;
}

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    string str;
    while(cin >> str) {
        int tot = 0, max = 1, s, sum=0;
        for(int i = 0; i < str.length();i++) {
            if(isalpha(str[i]) || isdigit(str[i])){
                if(str[i] >= 'a'){
                    s = str[i] - 'a'+10+26;
                }else if(str[i] >= 'A'){
                    s = str[i] - 'A'+10;
                }else s = str[i] - '0';
                sum += s;
                max = s>max? s: max;
            }
        }
        check(max, sum);
    }

    return 0;
}