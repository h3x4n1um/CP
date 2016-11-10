#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <pair <int, int> > *a;

void prime(int s){

}

int main(){
    scanf("%d%d", &n, &m);
    a = new vector <pair <int, int> > [n + 1];
    for (int i = 0; i < m ; ++i){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        a[u].push_back(make_pair(v, w));
        a[v].push_back(make_pair(u, w));
    }
    prime(1);
    delete [] a;
    return 0;
}
