#include <bits/stdc++.h>

using namespace std;

int sum, sub;
pair <int, int> a[101];

bool cmp(pair <int, int> m, pair <int, int> n){
    return m.first >= n.first && m.second > n.second;
}

int main(){
    int temp;
    for (int i = 0; i < 5; ++i){
        scanf("%d", &temp);
        ++a[temp].first;
        a[temp].second = temp;
        sum += temp;
    }
    sort(a, a + 101, cmp);
    for (int i = 0; i < 5; ++i){
        if (a[i].first == 2 && sub < 2 * a[i].second) sub = 2 * a[i].second;
        if (a[i].first > 2 && sub < 3 * a[i].second) sub = 3 * a[i].second;
    }
    printf("%d", sum - sub);
    return 0;
}
