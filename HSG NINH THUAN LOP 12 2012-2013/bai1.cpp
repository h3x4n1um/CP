#include <bits/stdc++.h>

using namespace std;

int n;
int a[1005][1005];
pair <int, int> point[1005], result[1005];

bool cmp(pair <int, int> q, pair <int, int> p){
    return (q.first >= p.first || (q.first == p.first && q.second < p.second));
}

int main(){
    freopen("bai1.inp", "r", stdin);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            if (i != j){
                point[i] = make_pair(point[i].first + a[i][j], i);
                if (a[i][j] == 2) result[i] = make_pair(result[i].first + 1, i);
                else if (a[i][j] == 0) result[i] = make_pair(result[i].first - 1, i);
            }
        }
    }
    sort(result + 1, result + n + 1, cmp);
    sort(point + 1, point + n + 1, cmp);
    puts("Cau 1");
    int i = 1;
    while(result[i].first > 0){
        printf("Doi %d tran thang > tran thua\n", result[i].second);
        ++i;
    }
    puts("Cau 2");
    if (result[1].first == n - 1) printf("Doi %d khong thua tran nao\n", result[1].second);
    puts("Cau 3");
    for (int i = n; i >= 1; --i){
        printf("%d ", point[i].first);
    }
    puts("");
    for (int i = n; i >= 1; --i){
        printf("%d ", point[i].second);
    }
    puts("");
    printf("Doi %d duoc nhieu diem nhat = %d", point[1].second, point[1].first);
    return 0;
}
