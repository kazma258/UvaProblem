#include <bits/stdc++.h>
using namespace std;

// 45897458973958
int main(int argc, char const *argv[]){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    long long input;
    int data[4] = {100, 10, 100, 100};
    string sum[4] = {"", "shata", "hajar", "lakh"};
    int con = 1;
    while(cin >> input){
        string ans = "";
        if(input == 0){
            ans.insert(0,"0");
        }
        for(int i = 0; input!= 0; i++){
            if(i!=0 && i%4==0)
                ans.insert(0, " kuti");
            if (input % data[i % 4] != 0) {
                ans.insert(0, sum[i % 4]);
                if(i%4 != 0)
                    ans.insert(0," ");
                stringstream ss;
                ss << input % data[i % 4];
                ans.insert(0, ss.str());
                if (input / data[i % 4] != 0)
                    ans.insert(0, " ");
            }
            input /= data[i % 4]; 
        }
        cout << con << ". " << ans << endl;
        con++;
    }

    return 0;
}