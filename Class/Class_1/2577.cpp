//2577 : 숫자의 개수
#include <iostream>
#include <string>

int main(){
    int a, b, c;
    int count[10] = {0};
    std::cin >> a >> b >> c;
    std::string s = std::to_string(a*b*c);
    for(int i = 0; i < s.size(); i++){
        int t = int(s[i] - '0');
        count[t] += 1;
    }
    for(int j = 0; j < 10; j++){
        std::cout << count[j];
        if(j != 9){ std::cout << "\n";}
    }
    return 0;
}