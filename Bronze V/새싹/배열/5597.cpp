//5597: 과제 안내신 분
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> list;
    for(int i = 0; i < 30; i++) list.push_back(i + 1);
    for(int j = 0; j < 28; j++){
        int n;
        cin >> n;
        list.erase(remove(list.begin(), list.end(), n),list.end());
    }
    cout << list[0] << endl << list[1];
    return 0;
}