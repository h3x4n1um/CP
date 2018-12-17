#include <bits/stdc++.h>

using namespace std;

int b;

int main(){
    for (int i = 1; i <= 5; ++i){
        int temp;
        scanf("%d", &temp);
        b += temp;
    }
    printf("%d", b % 5 ? -1 : b/5 == 0 ? -1 : b/5);
    return 0;
}
