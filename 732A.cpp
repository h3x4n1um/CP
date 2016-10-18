#include <bits/stdc++.h>

using namespace std;

int k ,r;

int main(){
    scanf("%d%d", &k, &r);
    for (int i = 1; i <= 9; ++i){
        if ((k * i - r) % 10 == 0 || (k * i) % 10 == 0){
            printf("%d", i);
            return 0;
        }
    }
    return 0;
}
