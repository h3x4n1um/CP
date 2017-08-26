#include <bits/stdc++.h>

using namespace std;

struct rec{
    public:
        int x1, y1, x2, y2;
        int scan(){
            scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
            return 0;
        }
        int print(){
            printf("%d %d %d %d\n", x1, y1, x2, y2);
            return 0;
        }
        bool in(const rec h){
            return (x1 > h.x1 && h.x2 > x2 && y1 > h.y1 && h.y2 > y2);
        }
};

bool cmp(rec a, rec b){
    return a.x1 < b.x1 || (a.x1 == b.y1 && a.y1 < b.y1);
}

int n;
vector <rec> a;

int main(){
    freopen("painting.inp", "r", stdin);
    freopen("painting.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        rec temp;
        temp.scan();
        a.push_back(temp);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); ++i){
        //a[i].print();
        int j = i + 1;
        while (a[j].in(a[i]) && j < a.size()){
            //printf("%d\n", j);
            a.erase(a.begin() + j);
        }
    }
    printf("%d", a.size());
    return 0;
}
