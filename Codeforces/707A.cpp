#include <bits/stdc++.h>

int n, m;
bool color;

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n * m; ++i){
        std::string temp;
        std::cin >> temp;
        if (temp != "B" && temp != "W" && temp != "G") color = true;
    }
    if (color) printf("#Color");
    else printf("#Black&White");
    return 0;
}
