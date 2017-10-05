#include <bits/stdc++.h>

using namespace std;

struct matrix{
    public:
        long long data[5][5] = {};
        matrix(){
            data[1][2] = data[2][1] = data[2][2] = 1;
        }
        matrix operator*(const matrix q) const{
            matrix p;
            for (int i = 1; i <= 2; ++i){
                for (int j = 1; j <= 2; ++j){
                    p.data[i][j] = 0;
                    for (int k = 1; k <= 2; ++k){
                        p.data[i][j] += (this->data[i][k] * q.data[k][j]) % 1000000007;
                    }
                }
            }
            return p;
        }
        int write(){
            for (int i = 1; i <= 2; ++i){
                for (int j = 1; j <= 2; ++j){
                    printf("%d ", data[i][j]);
                }
                puts("");
            }
        }
};

matrix power(matrix p, int n){
    if (n == 1) return p;
    if (n % 2) return p * power(p, n - 1);
    matrix q = power(p, n / 2);
    return q * q;
}

int t;

int main(){
    freopen("latgach.inp", "r", stdin);
    freopen("latgach.out", "w", stdout);
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        matrix a;
        if (n > 2){
            a = power(a, n - 2);
            printf("%I64d\n", (a.data[2][1] + 2 * a.data[2][2]) % 1000000007);
        }
        else printf("%d\n", n);
        /*long long f[1005] = {};
        f[0] = f[1] = 1;
        for (int i = 2; i <= n; ++i){
            f[i] = (f[i - 1] + f[i - 2]) % 1000000007;
        }
        printf("%I64d\n", f[n]);*/
    }
    return 0;
}
