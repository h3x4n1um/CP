#include <bits/stdc++.h>

using namespace std;

int n;
map <int, int> a;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        ++a[temp];
    }
    if (a[100] == 2 * a[200] || (a[100] % 2 == 0 && a[200] % 2 == 0)) printf("YES");
    else printf("NO");
    return 0;
}
