#include <bits/stdc++.h>

using namespace std;

int n, *a;

int main(){
    scanf("%d", &n);
    a = new int [n];
    for (int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    printf("%d\n%d", a[0], a[n - 1]);
    delete [] a;
    return 0;
}
