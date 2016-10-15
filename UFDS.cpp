#include <bits/stdc++.h>

int n, m, pSet[105], wrote[105];
std::vector <int> a[105];

void initUFDS(int q){
    for (int i = 1; i <= q; ++i) pSet[i] = i;
}

int findSet(int i){
    return (pSet[i] == i ? i : findSet(pSet[i]));
}

void fusionUFDS(int i, int j){
    pSet[findSet(i)] = findSet(j);
}

int main(){
    /*FILE*/
    #ifndef ONLINE_JUDGE
        freopen("UFDS.inp", "r", stdin);
        freopen("UFDS.out", "w", stdout);
    #endif // ONLINE_JUDGE
    /*READ*/
    scanf("%d%d", &n, &m);
    /*PROCESS*/
    initUFDS(n);
    for (int i = 0; i < m; ++i){
        int temp1, temp2;
        scanf("%d%d", &temp1, &temp2);
        fusionUFDS(temp1, temp2);
    }
    for (int i = 1; i <= n; ++i){
        pSet[i] = findSet(i);
        a[pSet[i]].push_back(i);
    }
    /*WRITE*/
    /*This way is very unconvinient use the way below*/
    /*for (int i = 1; i <= n; ++i){
        if (!wrote[i]){
            for (int j = 1; j <= n; ++j){
                if (pSet[i] == pSet[j]){
                    wrote[j] = true;
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }*/
    for (int i = 1; i <= n; ++i){
        printf("pSet[%d]: ", i);
        for (int j = 0; j < a[i].size(); ++j){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    /*TESTING ZONE
    printf("\nTESTING ZONE\n");
    printf("\npSet[1] = %d", pSet[1]);
    printf("\npSet[2] = %d", pSet[2]);*/
    return 0;
}
