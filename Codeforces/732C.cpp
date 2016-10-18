#include <bits/stdc++.h>

using namespace std;

long long b, d, s, ans;

int main(){
    scanf("%I64d%I64d%I64d", &b, &d, &s);
    priority_queue <long long> q;
    q.push(b);
    q.push(d);
    q.push(s);
    vector <long long> a;
    for (int i = 0; i < 3; ++i){
        a.push_back(q.top());
        q.pop();
    }
    if ((a[0] - a[1] == 1 && a[1] == a[2]) || (a[0] == a[1] && a[1] == a[2]) || (a[0] == a[1] && a[1] - a[2] == 1)){
        printf("0");
        return 0;
    }
    if (a[0] != a[1]) ans = (a[0] - a[1] - 1) + (a[0] - a[2] - 1);
    else ans = (a[0] - a[2] - 1);
    printf("%I64d", ans);
    return 0;
}
