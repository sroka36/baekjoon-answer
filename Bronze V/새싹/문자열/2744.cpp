//2744: 대소문자 바꾸기
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        if(isupper(a[i])) a[i] = tolower(a[i]); 
        else if(islower(a[i])) a[i] = toupper(a[i]);
    }
    cout << a;
    return 0;
}