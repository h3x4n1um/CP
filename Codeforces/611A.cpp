#include <bits/stdc++.h>

using namespace std;

int n, week = 52;
string a;

int main(){
    cin >> n >> a >> a;
    if (a == "month"){
        if (n < 30) printf("%d", 12);
        if (n == 30) printf("%d", 11);
        if (n == 31) printf("%d", 7);
    }
    if (a == "week"){
        if (n != 5 && n != 6) printf("%d", 52);
        else printf("%d", 53);
    }
}
