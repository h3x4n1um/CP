#include <bits/stdc++.h>

using namespace std;

struct vec{
    public:
        int push(int q){
            m.push_back(q);
            return q;
        }
        bool operator<(const vec b) const{
            for (int i = 0; i < m.size(); ++i){
                if (m[i] > b.m[i]) return false;
            }
            return true;
        }
        bool operator>(const vec b) const{
            for (int i = 0; i < m.size(); ++i){
                if (m[i] < b.m[i]) return false;
            }
            return true;
        }
        int _sort(){
            sort(m.begin(), m.end());
            return 0;
        }
    private:
        vector <int> m;
} a[1005];

int n, m;
int f[1005];
vector <int> ans[1005];

int main(){
    freopen("vector2.inp", "r", stdin);
    freopen("vector2.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i){
        for (int j = 0; j < m; ++j){
            int temp;
            scanf("%d", &temp);
            a[i].push(temp);
        }
        a[i]._sort();
    }
    for (int i = 1; i <= n; ++i){
        int temp = 0;
        for (int j = i - 1; j >= 0; --j){
            if (a[j] < a[i]) temp = max(temp, f[j]);
        }
        f[i] = temp + 1;
        ans[f[i]].push_back(i);
    }
    int temp = 0;
    for (int i = n; i >= 1; --i){
        if (!ans[i].empty()){
            temp = i;
            printf("%d\n", temp);
            break;
        }
    }
    for (int i = 1; i <= temp; ++i){
        for (int j = 0; j < ans[i].size(); ++j){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
