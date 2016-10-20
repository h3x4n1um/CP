#include <bits/stdc++.h>

int t, n;

int main(){
    scanf("%d", &t);
    for (int i = 0; i < t; ++i){
        scanf("%d", &n);
        std::cout << (1 / sqrt(5)) * (pow((1 + sqrt(5)) / 2, n + 1) - pow((1 - sqrt(5)) / 2, n + 1));
        printf("\n");
    }
    return 0;
}
