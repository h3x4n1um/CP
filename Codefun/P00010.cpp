#include <bits/stdc++.h>

std::string a;

int main(){
    std::cin >> a;
    if (a[0] == 'Z') a[0] = 'a';
    else a[0] = a[0] + 33;
    std::cout << a[0];
    return 0;
}
