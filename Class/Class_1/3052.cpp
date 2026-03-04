//3052 : 나머지(BII)
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n[10];
    std::vector<int> m;
    for(int i = 0; i < 10; i++){
        std::cin >> n[i];
        int s = n[i] % 42;
        if(std::find(m.begin(), m.end(), s) == m.end()) m.push_back(s);
    }
    std::cout << m.size();
    return 0;
}