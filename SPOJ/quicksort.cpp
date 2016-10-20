#include <bits/stdc++.h>

using namespace std;

vector <int> a;

void quick_sort(int l, int r){
    int i = l, j = r, pivot = a[(r - l + 1) / 2];
    while(i <= j){
        if (a[i] < pivot) ++i;
        if (a[j] > pivot) --j;
        if (i <= j){
            swap(a[i], a[j]);
            ++i; --j;
        }
    }
    if (i < r) quick_sort(i, r);
    if (j > l) quick_sort(l, j);
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    quick_sort(0, n - 1);
    for (int i = 0; i < n; ++i){
        printf("%d ", a[i]);
    }
    return 0;
}
