#include <bits/stdc++.h>

using namespace std;

map <int, int> a;
int n;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        a[temp] = i;
    }
    for (int i = 1; i <= n; ++i){
        printf("%d ", a[i]);
    }
    return 0;
}
