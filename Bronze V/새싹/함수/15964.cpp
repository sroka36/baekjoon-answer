//15964 : 이상한 기호
#include <iostream>

int main(){
    int64_t a, b;
    std::cin >> a >> b;
    if(a < 1 || b < 1) return 0;
    std::cout << (a + b) * (a - b);
}