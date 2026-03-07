//10809 : 알파벳 찾기 (BII)
#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cin >> s;
    int count[26] = {-1, -1, -1, -1,-1, -1, -1, -1,-1, -1, -1, -1,-1, -1, -1, -1,-1, -1, -1, -1,-1, -1, -1, -1,-1,-1};
    for(int i = 0; i < s.size(); i++){
        if(count[int(s[i] - 'a')] == -1) count[int(s[i] - 'a')] = i;
    }
    for(int i = 0; i < 26; i++) std::cout << count[i] << " ";
    return 0;
}