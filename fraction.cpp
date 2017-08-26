#include <bits/stdc++.h>

using namespace std;

struct fraction{
    public:
        int scan(){
            scanf("%d%d", &x, &y);
            return 0;
        }
        bool operator<(const fraction q) const{
            return (long long) x * q.y < (long long) q.x * y;
        }
        bool operator>(const fraction q) const{
            return (long long) x * q.y > (long long) q.x * y;
        }
        int _switch(){
            if (x < y) swap(x, y);
            return 0;
        }
        int _reverse_switch(){
            if (x > y) swap(x, y);
            return 0;
        }
    private:
        int x, y;
} a[100005];

int n, w, ans;
int f[100005], g[100005];
vector <fraction> q;

int main(){
    freopen("fraction.inp", "r", stdin);
    freopen("fraction.out", "w", stdout);
    scanf("%d%d", &n, &w);
    for (int i = 1; i <= n; ++i){
        a[i].scan();
    }
    if (w == 0){
        for (int i = 1; i <= n; ++i){
            int temp = 0;
            for (int j = i - 1; j >= 1; --j){
                if (a[j] < a[i]) temp = max(temp, f[j]);
            }
            f[i] = temp + 1;
            ans = max(ans, f[i]);
        }
    }
    if (w == 1){
        ///FIRST
        for (int i = 1; i <= n; ++i) a[i]._reverse_switch();
        for (int i = 1; i <= n; ++i){
            int temp = 0;
            for (int j = i - 1; j >= 1; --j){
                if (a[j] < a[i]) temp = max(temp, f[j]);
            }
            f[i] = temp + 1;
        }
        ///SECOND
        for (int i = 1; i <= n; ++i) a[i]._switch();
        for (int i = n; i >= 1; --i){
            int temp = 0;
            for (int j = i + 1; j <= n; ++j){
                if (a[j] > a[i]) temp = max(temp, g[j]);
            }
            g[i] = temp + 1;
            ans = max(ans, f[i] + g[i] - 1);
        }
    }
    printf("%d", ans);
    return 0;
}
