//2738: 행렬 덧셈
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> v1;
    vector<vector<int>> v2;
    vector<vector<int>> v3;
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            cin >> v1[i][j];
        }
    }
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            cin >> v2[i][j];
        }
    }
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            v3[i][j] = v1[i][j] + v2[i][j];
        }
    }
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            cout << v3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}