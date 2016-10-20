#include <bits/stdc++.h>

int n;
std::string a;

int main(){
    std::cin >> a;
    scanf("%d", &n);
    if (a[0] + n >= 123) a[0] = 'a' + (a[0] + n) % 123;
    else a[0] = a[0] + n;
    std::cout << a[0];
    return 0;
}
