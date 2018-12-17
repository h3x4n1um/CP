#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a, b1, b2, c;

int cmp(vector <int> q, vector <int> p){
    //q.size() > p.size()
    int pos_q = 0, pos_p = 0;
    while(pos_p < p.size()){
        while(p[pos_p] != q[pos_q]){
            ++pos_p;
            if (pos_p >= p.size()) return q[pos_q];
        }
        p[pos_p] = -1;
        q[pos_q] = -1;
        ++pos_q;
    }
    return q[pos_q];
}

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());

    for (int i = 1; i <= n - 1; ++i){
        int temp;
        scanf("%d", &temp);
        b1.push_back(temp);
        b2.push_back(temp);
    }
    sort(b1.begin(), b1.end());
    sort(b2.begin(), b2.end());

    for (int i = 1; i <= n - 2; ++i){
        int temp;
        scanf("%d", &temp);
        c.push_back(temp);
    }
    sort(c.begin(), c.end());

    printf("%d\n%d", cmp(a, b1), cmp(b2, c));
    return 0;
}
