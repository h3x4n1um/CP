#include <bits/stdc++.h>

using namespace std;

int a[5];

void emit_9(int i){
    a[i] = a[i] % 10;
    ++a[i - 1];
    if (a[i - 1] > 9 && i - 1 > 0) emit_9(i - 1);
}

int main(){
    for (int i = 0; i < 4; ++i){
        scanf("%1d", &a[i]);
    }
    ++a[3];
    if (a[3] > 9) emit_9(3);
    while(a[0] == a[1] || a[0] == a[2] || a[0] == a[3] || a[1] == a[2] || a[1] == a[3] || a[2] == a[3]){
        ++a[3];
        if (a[3] > 9) emit_9(3);
    }
    for (int i = 0; i < 4; ++i){
        printf("%d", a[i]);
    }
    return 0;
}
