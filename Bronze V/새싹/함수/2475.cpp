//2475 : 검증수
#include <iostream>
#include <math.h>

int main(){
    int a[5];
    int result;
    result = 0;
    for(int i = 0; i < 5; i++){
        std::cin >> a[i];
        result += pow(a[i], 2);
    }
    
    std::cout << result % 10; 
}