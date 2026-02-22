//2754 : 학점계산
#include <iostream>
#include <string>

int main(){
    std::string t;
    std::cin >> t;

    if(t == "A+") std::cout << "4.3";
    if(t == "A0") std::cout << "4.0";
    if(t == "A-") std::cout << "3.7";
    if(t == "B+") std::cout << "3.3";
    if(t == "B0") std::cout << "3.0";
    if(t == "B-") std::cout << "2.7";
    if(t == "C+") std::cout << "2.3";
    if(t == "C0") std::cout << "2.0";
    if(t == "C-") std::cout << "1.7";
    if(t == "D+") std::cout << "1.3";
    if(t == "D0") std::cout << "1.0";
    if(t == "D-") std::cout << "0.7";
    if(t == "F") std::cout << "0.0";
    return 0;
}