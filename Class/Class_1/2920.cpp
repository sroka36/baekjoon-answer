//2920 : 음계(BII)
#include <iostream>

int main(){
    int code[8];
    int check[2] = {0};
    for(int i = 0; i < 8; i++){
        std::cin >> code[i];
        if(code[i] == i + 1)  check[0] += 1;
        if(code[i] == 8 - i)  check[1] += 1;
    }

    if(check[0] == 8) std::cout << "ascending";
    else if(check[1] == 8) std::cout << "descending";
    else std::cout << "mixed";
    return 0;
}