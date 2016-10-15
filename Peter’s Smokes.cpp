#include <cstdio>

using namespace std;

int n, k, kq;

int smoke(int n){
    kq = kq + (n / k);
    if ((n / k) >= k) smoke(n / k);
}

int main(){
    freopen("10346.inp", "r", stdin);
    while (scanf("%d%d", &n, &k) != EOF ) {
        //printf("Co' chay khuc nay");
        kq = n;
        smoke(n);
        printf("%d", kq);
    }
    return 0;
}
