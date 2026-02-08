//A+B - 4
#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    while(a != 0 && b != 0){
        cout << a + b << "\n";
        a = 0;
        b = 0;
        cin >> a >> b;
    }

    return 0;
}