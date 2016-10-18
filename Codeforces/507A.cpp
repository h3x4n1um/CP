#include <bits/stdc++.h>

using namespace std;

int n, k, tong, kq;
vector <int> a, b, c;

void qsort(int l, int r){
    int i = l, j = r, x = a[(l + r) / 2];
    while(i <= j){
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j){
            swap(a[i], a[j]);
            swap(b[i], b[j]);
            ++i;
            --j;
        }
    }
    if (i < r) qsort(i, r);
    if (j > l) qsort(l, j);
}

int main(){
    int temp;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp);
        a.push_back(temp);
        b.push_back(i + 1);
    }
    qsort(0, n - 1);
    for (int i = 0; i < n; ++i){
        tong += a[i];
        if (tong > k) break;
        c.push_back(b[i]);
        ++kq;
    }
    printf("%d\n", kq);
    for (int i = 0; i < c.size(); ++i){
        printf("%d ", c[i]);
    }
    return 0;
}
