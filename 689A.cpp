#include <bits/stdc++.h>

using namespace std;

int n, a[100];

int main(){
    int temp;
    scanf("%d", &n);
    if (n == 1){
        printf("NO");
        return 0;
    }
    for (int i = 0; i < n; ++i){
        scanf("%1d", &temp);
        ++a[temp];
    }
    if ((a[9] > 0 && a[1] > 0) || (a[7] > 0 && a[3] > 0) || ((a[2] > 0 || a[1] > 0 || a[3] > 0) && a[0] > 0)) printf("YES");
    else printf("NO");
    return 0;
}
