//11718 : 그대로 출력하기
#include <iostream>
#include <string>

int main(){
    std::string a;
    //EOF까지 한 줄씩 읽기 = 읽은 게 없어질 때까지 읽기 
    while (std::getline(std::cin, a)) std::cout << a << std::endl;
    return 0;
}