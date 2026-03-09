//30802 : 웰컴 키트 (Bronze III)
#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int size[6];
    for(int i = 0; i < 6; i++) std::cin >> size[i];
    int t, p;
    std::cin >> t >> p;
    int ts = 0;
    for(int i = 0; i < 6; i++){
        if(size[i] % t != 0){
            ts += (size[i] / t) + 1;
        } else {
            ts += (size[i] / t);
        }
    }
    std::cout << ts << "\n";
    std::cout << n / p << " " << n % p;
    return 0;
}