#include <bits/stdc++.h>

using namespace std;

int a, b, c;
vector <int> f;

int main(){
    scanf("%d%d%d", &a, &b, &c);
    f.push_back((a + b) * c);
    f.push_back(a * (b + c));
    f.push_back(a * b + c);
    f.push_back(a + b * c);
    f.push_back(a * b * c);
    f.push_back(a + b + c);
    sort(f.begin(), f.end());
    printf("%d", f[f.size() - 1]);
    return 0;
}
