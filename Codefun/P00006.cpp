#include <bits/stdc++.h>

std::string s;

int main(){
    std::cin >> s;
    for (int i = s.size() - 1; i >= 0; --i){
        std::cout << s[i];
    }
    return 0;
}
