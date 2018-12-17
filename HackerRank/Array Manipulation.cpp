#include <bits/stdc++.h>

using namespace std;

struct req{
public:
    int a;
    int b;
    long k;

    bool operator==(const req other){
        return (other.a == this->a && other.b == this->b && other.k == this->k);
    }
    bool operator!=(const req other){
        return !(*this == other);
    }

    req intersection(const req other){
        if (this->a >= other.a && this->a <= other.b) return make_req(p.a, min(p.b, q.b), q.k + p.k);
        swap(p, q);
        if (p.a >= q.a && p.a <= q.b) return make_req(p.a, min(p.b, q.b), q.k + p.k);
        return make_req(-1, -1, -1);
    }
};

req make_req(int _a, int _b, long _k){
    req temp = {_a, _b, _k};
    return temp;
}

int n, m;
long ans;
vector <req> r;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Array Manipulation.inp", "r", stdin);
        freopen("Array Manipulation.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i){
        req temp;
        scanf("%d%d%ld", &temp.a, &temp.b, &temp.k);
        r.push_back(temp);
    }
    int i = 0;
    while(i < r.size()){
        bool add = true;
        for (int j = 0; j < r.size(); ++j){
            if (i != j){
                auto sub = inside(r[i], r[j]);
                if (sub != make_req(-1, -1, -1)){

                }
            }
        }
        if (add) ++i;
    }
    printf("%ld", ans);
    return 0;
}
