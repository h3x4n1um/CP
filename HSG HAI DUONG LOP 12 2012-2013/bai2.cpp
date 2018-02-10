#include <bits/stdc++.h>

using namespace std;

int n, ans;

int doLech(int q){
    if (q != n) ++ans;
    if (q == 0 || q == 6174) return ans;
    vector <int> temp;
    while(q > 0){
        temp.push_back(q % 10);
        q = q / 10;
    }
    sort(temp.begin(), temp.end());
    int n1 = 0, n2 = 0;
    for (int i = temp.size() - 1; i >= 0; --i) n1 = n1 * 10 + temp[i];
    for (int i = 0; i < temp.size(); ++i) n2 = n2 * 10 + temp[i];
    return doLech(n1 - n2);
}

int main(){
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    scanf("%d", &n);
    printf("%d", doLech(n));
    return 0;
}
