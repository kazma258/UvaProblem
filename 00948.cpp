#include <iostream>
#include <cstdio>

int fib[39] = {1,2};
int main(int argc, char const *argv[]) {
    // build fib array
    for(int i=2; i<39; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    int n, input;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &input);
        printf("%d = ", input);
        int flag = 39;
        while(flag--){ // 去左側0
            if(input - fib[flag] >= 0)
                break;
        }
        do{
            if(input - fib[flag] >= 0){
                input -= fib[flag];
                printf("1");
            }else printf("0");
        }while(flag--);
        printf(" (fib)\n");
    }

    return 0;
}