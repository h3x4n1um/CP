#include <bits/stdc++.h>

using namespace std;

const int di[] = {0, 0, 1, -1};
const int dj[] = {1, -1, 0, 0};
const char ds[] = {'E', 'W', 'S', 'N'};

int a[100][100], m, n;
pair <int, int> goback[100][100], from;
char waygo[100][100];
string temp, go = "                                                     ";

void FindWay(pair <int, int> k){
    temp = "";
    while (goback[k.first][k.second].first != 0 && goback[k.first][k.second].second != 0){
        temp = waygo[k.first][k.second] + temp;
        k = goback[k.first][k.second];
    }
    if (temp.length() < go.length()) go = temp;
}

void bfs(pair <int, int> k){
    vector <pair <int, int> > q;
    int dem = 0;
    q.push_back(k);
    while (!q.empty()){
        bool tru = true;
        ++dem;
        for (int i = 0; i < 4; ++i){
            if (a[q[0].first+di[i]][q[0].second+dj[i]] == 0){
                tru = false;
                a[q[0].first+di[i]][q[0].second+dj[i]] = dem;
                q.push_back(make_pair(q[0].first+di[i], q[0].second+dj[i]));
                goback[q[0].first+di[i]][q[0].second+dj[i]] = make_pair(q[0].first, q[0].second);
                waygo[q[0].first+di[i]][q[0].second+dj[i]] = ds[i];
                if (q[0].first+di[i] == 1 || q[0].first+di[i] == m || q[0].second+dj[i] == 1 || q[0].second+dj[i] == n){
                    FindWay(make_pair(q[0].first+di[i], q[0].second+dj[i]));
                }
            }
        }
        if (tru == true) --dem;
        q.erase(q.begin());
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("mecung.inp", "r", stdin);
        freopen("mecung.out", "w", stdout);
    #endif // ONLINE_JUDGE
    memset(a, -1, sizeof a);
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            char temp;
           cin >> temp;
            if (temp == 'O') a[i][j] = 0;
            if (temp == 'E') from = make_pair(i, j);
        }
    }
    bfs(from);
    cout << go;
    return 0;
}
