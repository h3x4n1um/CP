#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main(){
    int temp = 0;
    scanf("%d%d%d", &a, &b, &c);
    while (temp * a <= c){
        if ((c - temp * a) % b == 0){
            printf("Yes");
            exit(0);
        }
        ++temp;
    }
    printf("No");
    return 0;
}
