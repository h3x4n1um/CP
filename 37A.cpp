#include <bits/stdc++.h>

using namespace std;

int n, a[1001], kq1, kq2;

int main(){
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp);
        if (a[temp] == 0){
            ++kq2;
        }
        ++a[temp];
        if (kq1 < a[temp]) kq1 = a[temp];
    }
    printf("%d %d", kq1, kq2);
    return 0;
}
