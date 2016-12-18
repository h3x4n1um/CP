#include <bits/stdc++.h>

int n;

int main(){
    scanf("%d", &n);

    if (n == 0) printf("1");
    else{
        if (n % 4 == 0) printf("6");
        if (n % 4 == 1) printf("8");
        if (n % 4 == 2) printf("4");
        if (n % 4 == 3) printf("2");
    }
    return 0;
}
