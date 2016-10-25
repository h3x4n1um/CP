#include <bits/stdc++.h>

#define oo 1000007

using namespace std;

int n, m, s, t, d[101], went[101], goback[101];
vector <pair <int, int> > a[101];

void bellman_ford(int from, int to){
    vector <int> q;
    memset(d, oo, sizeof d);
    d[from] = 0;
    q.push_back(from);
    went[from] = true;
    while (!q.empty()){
        while (!a[q[0]].empty()){
            if (d[a[q[0]][0].first] > d[q[0]] + a[q[0]][0].second){
                d[a[q[0]][0].first] = d[q[0]] + a[q[0]][0].second;
                goback[a[q[0]][0].first] = q[0];
            }
            if (!went[a[q[0]][0].first]){
                went[a[q[0]][0].first] = true;
                q.push_back(a[q[0]][0].first);
            }
            a[q[0]].erase(a[q[0]].begin());
        }
        //if (q[0] == to) break;
        q.erase(q.begin());
    }
}

void truy_vet(int k){
    vector <int> q;
    while (k != 0){
        q.push_back(k);
        k = goback[k];
    }
    printf("%d", q[q.size() - 1]);
    for (int i = q.size() - 2; i >= 0; --i){
        printf(" -> %d", q[i]);
    }
}

int main(){
    scanf("%d%d%d%d", &n, &m, &s, &t);
    for (int i = 0; i < m; ++i){
        int temp1, temp2, temp3;
        scanf("%d%d%d", &temp1, &temp2, &temp3);
        a[temp1].push_back(make_pair(temp2, temp3));
        a[temp2].push_back(make_pair(temp1, temp3));
    }
    bellman_ford(s, t);
    printf("%d\n", d[t]);
    //truy_vet(t);
    return 0;
}
