#include <iostream>

using namespace std;

int main(){

    int64_t a, b;

    cin >> a >> b;

    if (a >= b) cout << (a - b);
    if (b > a) cout << (b - a);
    
    return 0;
}