//10250 : ACM 호텔
#include <iostream>

int main(){
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        int h, w, n;
        std::cin >> h >> w >> n;
        int f, r;
        if(n % h == 0) {
            f = h;
            r = (n / h);
        }
        else{
            f = n % h;
            r = (n / h) + 1;
        }
        
        std::cout << (f*100)+r << "\n";
    }
    return 0;
}