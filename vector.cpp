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
                if (m[i] >= b.m[i]) return false;
            }
            return true;
        }
        int _sort(){
            sort(m.begin(), m.end());
            return 0;
        }
    private:
        vector <int> m;
};

int n, m, ans;
int f[100005];
vector <vec> a, q;

int main(){
    freopen("vector.inp", "r", stdin);
    freopen("vector.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i){
        vec k;
        for (int j = 0; j < m; ++j){
            int temp;
            scanf("%d", &temp);
            k.push(temp);
        }
        k._sort();
        a.push_back(k);
    }
    /*for (int i = 0; i < n; ++i){
        int temp = 0;
        for (int j = i - 1; j >= 0; --j){
            if (a[j] < a[i]) temp = max(temp, f[j]);
        }
        f[i] = temp + 1;
        ans = max(ans, f[i]);
    }
    printf("%d", ans);*/
    for (int i = 0; i < n; ++i){
        vector<vec>::iterator it = upper_bound(q.begin(), q.end(), a[i]);
        if (it == q.end()) q.push_back(a[i]);
        else (a[i] < *it) *it = a[i];
    }
    printf("%d", q.size());
    return 0;
}
