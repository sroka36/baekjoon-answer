//31403 : A + B - C
#include <iostream>
#include <string>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    std::string result = std::to_string(a) + std::to_string(b);
    int d = std::stoi(result);
    std::cout << a + b - c << "\n" <<  d - c;
}