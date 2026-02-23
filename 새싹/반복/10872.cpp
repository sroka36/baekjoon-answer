//팩토리얼
#include <iostream>

using namespace std;

int main(){

    int n;

    int result = 1;

    cin >> n;

    for(int i = n; i > 0;i--){
        result *= i;
    }
    
    cout << result;

    return 0;
}