#include <bits/stdc++.h>

using namespace std;

string a, b;

int main(){
    cin >> a >> b;
    if (a.size() > b.size()) b.insert(0, a.size() - b.size(), '0');
    if (a.size() < b.size()) a.insert(0, b.size() - a.size(), '0');
    for (int i = 0; i < a.size(); ++i){
        if (a[i] > b[i]){
            printf("1");
            return 0;
        }
        if (a[i] < b[i]){
            printf("-1");
            return 0;
        }
    }
    printf("0");
    return 0;
}
