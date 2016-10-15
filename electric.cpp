#include <bits/stdc++.h>

using namespace std;

struct MultiArray{
    int order;
    int from;
    int to;
    int citizen;
};

MultiArray a[100];
vector <int> road;
bool went[100];
int n, m, ans;

void Multi_Array_Sort(int l, int r){
    int x = (l + r) / 2, i = l, j = r;
    while (a[i].citizen > a[x].citizen || (a[i].citizen == a[x].citizen && a[i].order < a[x].order)) ++i;
    while (a[j].citizen < a[x].citizen || (a[j].citizen == a[x].citizen && a[j].order > a[x].order)) --j;
    while (i <= j){
        swap(a[i], a[j]);
        ++i;
        --j;
    }
    if (i < r) Multi_Array_Sort(i, r);
    if (j > l) Multi_Array_Sort(l, j);
}

void Kruskal(){
    for (int i = 0; i < m; ++i){
        if (!went[a[i].from] || !went[a[i].to]){
            went[a[i].from] = true;
            went[a[i].to] = true;
            ans += a[i].citizen;
            road.push_back(a[i].order);
        }
    }
    printf("%d\n", ans);
    for (int i = 0; i < road.size(); ++i){
        printf("%d\n", road[i]);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("electric.inp", "r", stdin);
        freopen("electric.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        a[i].order = i + 1;
        scanf("%d%d%d", &a[i].from, &a[i].to, &a[i].citizen);
    }
    Multi_Array_Sort(0, m - 1);
    Kruskal();
    return 0;
}
