//빠른입출력: 빠른 A+B
#include <iostream>

using namespace std;

int main(){
    int t;
    int a, b;

    //시간초과 방지
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;
        cout << a+b << "\n";
    }
    return 0;
}