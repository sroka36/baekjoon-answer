//1152: 단어의 개수
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> split(std::string str, char delimiter);

int main(){
    std::string s;
    int r = 0;
    std::getline(std::cin, s);
    std::vector<std::string> t = split(s, ' ');
    for(int i = 0; i < t.size(); i++){
        if(t[i] != ""){ r += 1; }
    }
    std::cout << r;
    return 0;
}

std::vector<std::string> split(std::string input, char delimiter) {
    std::vector<std::string> result;
    std::stringstream ss(input);
    std::string temp;
 
    while (std::getline(ss, temp, delimiter)) {
        result.push_back(temp);
    }
 
    return result;
}