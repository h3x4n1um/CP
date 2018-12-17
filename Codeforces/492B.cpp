#include <bits/stdc++.h>

using namespace std;

int n, l;
float d;
vector <int> a;

int main(){
    scanf("%d%d", &n, &l);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    if (a[0] > 0) d = a[0];
    if (a[a.size() - 1] < l) d = max(d, (float) l - a[a.size() - 1]);
    for (int i = 1; i < a.size(); ++i){
        d = max(d, (float) (a[i] - a[i - 1]) / 2);
    }
    printf("%.9f", d);
    return 0;
}
