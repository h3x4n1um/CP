#include <bits/stdc++.h>

using namespace std;

int n, m, i = 1;
bool r = true, a[55][55];

int main(){
    scanf("%d%d", &n, &m);
    while(i <= n){
        int j;
        if (r){
            for (j = 1; j <= m; ++j) a[i][j] = true;
            --j;
        }
        else{
            for (j = m; j >= 1; --j) a[i][j] = true;
            ++j;
        }
        r = 1 - r;
        for (int k = 1; k <= 2; ++k){
            a[i][j] = true;
            ++i;
        }
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (a[i][j]) printf("#");
            else printf(".");
        }
        puts("");
    }
    return 0;
}
