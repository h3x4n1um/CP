#include <bits/stdc++.h>

using namespace std;

const int di[]{1, -1, 0, 0};
const int dj[]{0, 0, -1, 1};

int r, c, a[102][102];
bool went[102][102];
pair <int, int> from, to;
char temp;

void bfs(int i, int j){
    vector <pair <int, int> > q;
    q.push_back(make_pair(i, j));
    went[q[0].first][q[0].second] = true;
    while (!q.empty()){
        for (int k = 0; k < 4; ++k){
            if (!went[q[0].first + di[k]][q[0].second + dj[k]] && a[q[0].first + di[k]][q[0].second + dj[k]] == 1){
                went[q[0].first + di[k]][q[0].second + dj[k]] = true;
                a[q[0].first + di[k]][q[0].second + dj[k]] += a[q[0].first][q[0].second];
                q.push_back(make_pair(q[0].first + di[k], q[0].second + dj[k]));
            }
        }
        q.erase(q.begin());
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("VMUNCH.inp", "r", stdin);
        freopen("VMUNCH.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &r, &c);
    for (int i = 1; i <= r; ++i){
        for (int j = 1; j <= c; ++j){
            scanf("%1s", &temp);
            if (temp == 'B'){
                from = make_pair(i, j);
                a[i][j] = 0;
            }
            if (temp == 'C'){
                to = make_pair(i, j);
                a[i][j] = 1;
            }
            if (temp == '.') a[i][j] = 1;
        }
    }
    bfs(from.first, from.second);
    printf("%d", a[to.first][to.second]);
    return 0;
}
