//2562 : 최댓값
#include <iostream>

int main(){
    int a[9];
    int max = 0;
    int loc = 0;
    for(int i = 0; i < 9; i++){
        std::cin >> a[i];
        if(a[i] > max) {
            max = a[i];
            loc = i;
        }
    }
    std::cout << max << "\n" << loc + 1;
    return 0;
}