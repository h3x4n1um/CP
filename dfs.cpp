#include <bits/stdc++.h>

using namespace std;

bool used[100];
int n, m, from, to;
vector <int> kq, a[100];

void dfs(int k){
    used[k] = true;
    kq.push_back(k);
    if (k == to){
        for (unsigned int i = 0; i < kq.size(); ++i) printf("%d ", kq[i]);
        exit(0);
    }
    for (unsigned int i = 0; i < a[k].size(); ++i){
        if (!used[a[k][i]]){
            dfs(a[k][i]);
            kq.pop_back();
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("dfs.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    int temp1, temp2;
    scanf("%d%d%d%d", &n, &m, &from, &to);
    for (int i = 0; i < m; ++i){
        scanf("%d%d", &temp1, &temp2);
        a[temp1].push_back(temp2);
    }
    dfs(from);
    return 0;
}
