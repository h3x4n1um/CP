#include <bits/stdc++.h>

using namespace std;

int n;
vector <pair <int, int> > a;

bool cmp(pair <int, int> q, pair <int, int> p){
    return q.second < p.second;
}

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int x, y;

        scanf("%d%d", &x, &y);
        a.push_back(make_pair(x, y));
    }

    sort(a.begin(), a.end(), cmp);
    for (int i = 1; i < a.size(); ++i){
        if (a[i] < a[i - 1]) {
            printf("Happy Alex");
            return 0;
        }
    }
    printf("Poor Alex");
    return 0;
}
