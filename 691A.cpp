#include <bits/stdc++.h>

int n, m;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        if (temp == 0) ++m;
    }
    if (n == 1){
        if (m == 0) printf("YES");
        if (m != 0) printf("NO");
    }
    if (n > 1){
        if (m == 1) printf("YES");
        else printf("NO");
    }
    return 0;
}
