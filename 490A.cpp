#include <bits/stdc++.h>

using namespace std;

long int n;
vector <int> a, b, c;

int main(){
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp);
        if (temp == 1) a.push_back(i + 1);
        if (temp == 2) b.push_back(i + 1);
        if (temp == 3) c.push_back(i + 1);
    }
    temp = min(min(a.size(), b.size()), c.size());
    printf("%d\n", temp);
    if (temp > 0){
        for (int i = 0; i < temp; ++i){
            printf("%d %d %d\n", a[i], b[i], c[i]);
        }
    }
    return 0;
}
