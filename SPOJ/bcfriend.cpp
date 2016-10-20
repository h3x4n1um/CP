#include <bits/stdc++.h>

using namespace std;

long int n, s, kq;
short int a[100000000], b[100000000];

int main(){
    freopen("BCFRIEND.inp", "r", stdin);
    scanf("%ld%ld", &n, &s);
    for (long int i = 0; i < n; ++i){
        long int temp;
        scanf("%ld", &temp);
        if (temp < 0) ++b[abs(temp)];
        else ++a[temp];
    }
    for (long int i = 0; i <= n; ++i){
        if (s - i < 0){
            if (i < 0) kq += min(b[abs(s - i)], b[abs(i)]);
            else kq += min(b[abs(s - i)], a[i]);
        }
        else{
            if (i < 0) kq += min(a[s - i], b[abs(i)]);
            else kq += min(a[s - i], a[i]);
        }
    }
    printf("%ld", kq);
    return 0;
}
