#include <bits/stdc++.h>

using namespace std;

int n, t;
int a[10005];

int main(){
    scanf("%d%d", &n, &t);
    for (int i = 1; i < n; ++i){
        scanf("%d", &a[i]);
    }
    int i = 1;
    while(i < n){
        if (i == t){
            printf("YES");
            return 0;
        }
        i += a[i];
    }
    printf("NO");
    return 0;
}
