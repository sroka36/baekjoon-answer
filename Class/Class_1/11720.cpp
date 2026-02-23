//11720 : 숫자의 합
#include <iostream>
int main(){
    int n;
    int result = 0;
    std::cin >> n;
    char s[n+1];
    std::cin >> s;
    for(int i = 0; i < n; i++){
        result += int(s[i] - '0');
    }
    std::cout << result;
}