#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n - i; ++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
