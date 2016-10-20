#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, temp = 1, socan2 = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i){
        scanf("%d", &n);
        if (n >= 2){
            socan2 = n - 2;
            for (int i = 1; i < n - 2; ++i){
                socan2 = socan2 + 2 * i;
            }
            printf("%.3f\n", n * n - socan2 + socan2 * sqrt(2));
        }
        else printf("0.000\n");
    }
    return 0;
}
