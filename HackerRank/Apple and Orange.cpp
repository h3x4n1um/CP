#include <bits/stdc++.h>

using namespace std;

int s, t, a, b, m, n, apple, orange;

int main(){
    scanf("%d%d%d%d%d%d", &s, &t, &a, &b, &m, &n);
    for (int i = 0; i < m; ++i){
        int temp;
        scanf("%d", &temp);
        if (a + temp >= s && a + temp <= t) ++apple;
    }
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        if (b + temp >= s && b + temp <= t) ++orange;
    }
    printf("%d\n%d", apple, orange);
    return 0;
}
