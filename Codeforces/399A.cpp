#include <bits/stdc++.h>

using namespace std;

int n, p, k;

int main(){
    scanf("%d%d%d", &n, &p, &k);
    if (p - k > 1) printf("<< ");
    for (int i = p - k; i <= p + k; ++i){
        if (i > 0){
            if (i == p) printf("(%d) ", i);
            else printf("%d ", i);
            if (i == n) break;
            if (i == p + k) printf(">>");
        }
    }
    return 0;
}
