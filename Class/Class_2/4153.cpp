//4153 : 직각삼각형 (BIII)
#include <iostream>
#include <algorithm>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    while(true){
        if(a == 0 && b == 0 && c == 0) break;
        int max =  std::max({a, b, c});
        if((max * max) == (a * a) + (b * b) || (max * max) == (b * b) + (c * c) || (max * max) == (c * c) + (a * a)){
            std::cout << "right" << "\n";
        } else {
            std::cout << "wrong" << "\n";
        }
        std::cin >> a >> b >> c;
    }
    return 0;
}