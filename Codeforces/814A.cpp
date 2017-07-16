#include <bits/stdc++.h>

using namespace std;

int n, k, cnt;
vector <int> a, b;

bool cmp(int q, int p){
    return q > p;
}

bool check(vector <int> q){
    int temp = 0;
    for (int i = 1; i < q.size(); ++i){
        if (q[i] > q[i - 1]) ++temp;
    }
    if (temp == q.size() - 1) return false;
    return true;
}

int main(){
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
        if (temp == 0) ++cnt;
    }
    for (int i = 1; i <= k; ++i){
        int temp;
        scanf("%d", &temp);
        b.push_back(temp);
    }
    sort(b.begin(), b.end(), cmp);
    for (int i = 0; i < a.size(); ++i){
        if (a[i] == 0){
            a[i] = b[0];
            b.erase(b.begin());
        }
    }
    if (check(a)) printf("Yes");
    else printf("No");
    return 0;
}
