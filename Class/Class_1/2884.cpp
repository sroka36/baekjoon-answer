//2884 : 알람 시계
#include <iostream>

int main(){
    int h, m;
    std::cin >> h >> m;
    int time = (h * 60) + m;
    time -= 45;
    if(time < 0) time += 1440;
    std::cout << (time / 60) << " " << (time % 60);
    return 0;
}