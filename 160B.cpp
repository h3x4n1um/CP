#include <bits/stdc++.h>

using namespace std;

int n, check;
vector <int> a, b;

int main(){
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%1d", &temp);
        a.push_back(temp);
    }
    for (int i = 0; i < n; ++i){
        scanf("%1d", &temp);
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a[0] > b[0]) check = 1;
    if (a[0] < b[0]) check = 2;
    if (a[0] == b[0]){
        printf("NO");
        return 0;
    }
    for (int i = 1; i < n; ++i){
        if (a[i] > b[i] && check != 1){
            printf("NO");
            return 0;
        }
        if (a[i] < b[i] && check != 2){
            printf("NO");
            return 0;
        }
        if (a[i] == b[i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
