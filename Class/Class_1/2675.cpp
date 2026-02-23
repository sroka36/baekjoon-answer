//2675 : 문자열 반복
#include <iostream>
#include <string>

int main(){
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int c;
        std::string s;
        std::cin >> c >> s;
        for(int j = 0; j < s.size(); j++){
            for(int k = 0; k < c; k++){
                std::cout << s[j];
            }
        }
        std::cout << "\n";
    }
    return 0;
}