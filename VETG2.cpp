#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            printf("-");
        }
        for (int j = 0; j <= i; ++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
