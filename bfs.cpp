#include <bits/stdc++.h>

using namespace std;

int n, m, from, to, goback[100];
bool used[100], a[100][100];

void write_and_end(int i){
    vector <int> kq;
    while (i != from){
        kq.push_back(i);
        i = goback[i];
    }
    kq.push_back(i);
    for (int j = kq.size() - 1; j >= 0; --j) printf("%d\n", kq[j]);
    exit(0);
}

void bfs(int k){
    vector <int> q;
    used[k] = true;
    q.push_back(k);
    while (!q.empty()){
//        printf("%d\n", q[0]);
        for (int i = 1; i <= n; ++i){
            if (!used[i] && a[q[0]][i]){
                used[i] = true;
                goback[i] = q[0];
                if (i == to) write_and_end(i);
                q.push_back(i);
            }
        }
        q.erase(q.begin());
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("bfs.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    int temp1, temp2;
    scanf("%d%d%d%d", &n, &m, &from, &to);
    for (int i = 0; i < m; ++i){
        scanf("%d%d", &temp1, &temp2);
        a[temp1][temp2] = true;
    }
    bfs(from);
    return 0;
}
