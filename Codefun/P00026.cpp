#include <bits/stdc++.h>

using namespace std;

int *a;

int main(){
    a = new int [3];
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    for (int i = 0; i < 3; ++i){
        for (int j = i + 1; j < 3; ++j){
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < 3; ++i){
        printf("%d ", a[i]);
    }
    delete [] a;
    return 0;
}
