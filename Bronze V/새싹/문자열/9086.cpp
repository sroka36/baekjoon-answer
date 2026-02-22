//9086 : 문자열
#include <iostream>
#include <string>

int main(){
    int s;
    std::cin >> s;
    for(int i = 0; i < s; i++){
        std::string s;
        std::cin >> s;
        std::cout << s[0] << s[s.size() - 1] << "\n";
    }
}