//10818 : 최소, 최대
#include <iostream>

int main(){
    int64_t n;
    std::cin >> n;
    int64_t s[n];
    int64_t max = -1000000;
    int64_t min = 1000000;
    for(int i = 0; i < n; i++){
        std::cin >> s[i];
        if(s[i] > max) max = s[i];
        if(s[i] < min) min = s[i];
    }
    std::cout << min << " " << max;
    return 0;
}