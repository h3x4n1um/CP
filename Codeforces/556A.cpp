#include <bits/stdc++.h>

using namespace std;

int n;
int a[5];

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%1d", &temp);
        ++a[temp];
    }
    printf("%d", abs(a[0] - a[1]));
    return 0;
}
