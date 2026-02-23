//10871:X보다 작은 수
#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int list[n];
    for(int j = 0; j < n; j++){
        int a;
        cin >> a;
        list[j] = a;
    }
    for(int i = 0; i < n; i++){
        if(list[i] < x){
            cout << list[i] << " ";
        }
    }
    return 0;
}