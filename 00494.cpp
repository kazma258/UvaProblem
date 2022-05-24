#include <bits/stdc++.h>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string input;
    while(getline(std::cin, input)){
        std::vector<std::string> substr;
        int result = 0;
        while(!input.empty()){
            if(isalpha(input.front())){
                int count = 0;
                while(count < input.length()){
                    if(!isalpha(input[count])) break;
                    count++;
                }
                input.erase(input.begin(), input.begin() + count);
                result++;
            }else{
                input.erase(input.begin());
            }
        }
        std::cout << result << std::endl;
    }

    return 0;
}