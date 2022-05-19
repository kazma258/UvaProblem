#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    string move[2] = { "234567890-=ertyuiop\\[]dfghjkl;'cvbnm,./", 
                       "`1234567890qwertyui[opasdfghjklzxcvbnm,"};
    string input;
    while (getline(cin, input)){
        for(int i = 0; i <input.length(); i++){
            if(input[i] >= 'A' && input[i] <= 'Z')
                input[i] = input[i]-'A'+'a';
            if(input[i] == ' ') cout << input[i];
            else 
                cout << move[1][move->find(input[i])];
        }
        cout << endl;
    }
    return 0;
}