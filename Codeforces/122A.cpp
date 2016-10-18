#include <bits/stdc++.h>

int n, check = 4;

int main(){
    scanf("%d", &n);
    while (n >= check){
        check += 3;
    }
    return 0;
}
