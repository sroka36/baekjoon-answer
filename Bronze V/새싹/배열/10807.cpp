#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int result = 0;
    int list[n];
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        list[i] = a;
    }
    int x;
    cin >> x;
    for(int j = 0; j < n; j++){
        if(list[j] == x) result += 1;
    }
    cout << result;
    return 0;
}