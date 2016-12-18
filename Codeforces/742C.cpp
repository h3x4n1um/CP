#include <bits/stdc++.h>

using namespace std;

int n, a[107], went[107], ans = 1000000007;

int findT(int p){
    int last_ele, t = 0;
    queue <int> q;
    q.push(p);
    while(!q.empty()){
        last_ele = q.front();
        q.pop();
        went[last_ele] = true;
        if (!went[a[last_ele]]){
            ++t;
            q.push(a[last_ele]);
        }
    }

    if (a[last_ele] == p && t > 0) return t + 1;
    return -1;
}

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; ++i){
        if (!went[i]){
            int temp = findT(i);
            if (temp > -1){
                if (temp == 2) temp = temp - 1;
                ans = min(temp, ans);
            }
        }
    }

    if (ans == 1000000007) printf("-1");
    else printf("%d", ans);
    return 0;
}
