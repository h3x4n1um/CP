#include <bits/stdc++.h>

const int di[] {-1, 1, 0, 0};
const int dj[] {0, 0, -1, 1};

int m, n, a[23][23];
bool went[23][23];

int bfs(std::pair <int, int> from, int default_value){
    std::queue <std::pair <int, int> > q;
    int ans = 1;
    q.push(from);
    went[from.first][from.second] = true;
    while (!q.empty()){
        int u = q.front().first, v = q.front().second;
        q.pop();
        for (int i = 0; i < 4; ++i){
            if (!went[u + di[i]][v + dj[i]] && a[u + di[i]][v + dj[i]] == default_value){
                went[u + di[i]][v + dj[i]] = true;
                q.push(std::make_pair(u + di[i], v + dj[i]));
                ++ans;
            }
        }
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("11094.inp", "r", stdin);
        freopen("11094.out", "w", stdout);
    #endif // ONLINE_JUDGE
    while (scanf("%d%d", &m, &n) != EOF){
        /*INIT*/
        memset(a, 0, sizeof a);
        memset(went, false, sizeof went);
        int x, y, ans = 0;
        std::string check = "";
        /*READ*/
        for (int i = 0; i < m; ++i){
            std::string temp;
            std::cin >> temp;
            for (int j = 0; j < temp.size(); ++j){
                if (check.find(temp[j]) == std::string::npos) check = check + temp[j];
                a[i][j] = check.find(temp[j]) + 1;
            }
        }
        scanf("%d%d", &x, &y);
        /*PROCESS*/
        int default_value = a[x][y];
        bfs(std::make_pair(x, y), default_value);
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < n; ++j){
                if (!went[i][j] && a[i][j] == default_value) ans = std::max(ans, bfs(std::make_pair(i, j), default_value));
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
