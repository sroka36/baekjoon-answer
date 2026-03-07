//8958 : OX퀴즈(BII)
#include <iostream>
#include <string>

int main(){
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int temp = 0;
        int score = 0;
        std::string s;
        std::cin >> s;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == 'O'){
                temp += 1;
                score += temp;
            }
            else if(s[j] == 'X') temp = 0;
        }
        std::cout << score << "\n";
    }
    return 0;
}