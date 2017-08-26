#include <bits/stdc++.h>

using namespace std;

int n, prev_;
long long ans;
/*Depricated
vector <int> a;

long long solve(int x, int y, long long sum){
    if (x > y) return 0;
    pair <int, int> temp = make_pair(x, 100005);
    for (int i = x; i <= y; ++i){
        if (temp.second > a[i]) temp = make_pair(i, a[i]);
    }
    temp.second = temp.second - sum;
    sum += temp.second;
    return solve(x, temp.first - 1, sum) + solve(temp.first + 1, y, sum) + temp.second;
}*/

int main(){
    freopen("poker.inp", "r", stdin);
    freopen("poker.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        ans += abs(temp - prev_);
        prev_ = temp;
        if (i == n - 1) ans += temp;
        /*a.push_back(temp);*/
    }
    printf("%I64d", ans / 2);
    /*printf("%I64d", solve(0, n - 1, 0));*/
    return 0;
}
