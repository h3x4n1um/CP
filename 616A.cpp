#include <bits/stdc++.h>

using namespace std;

string a, b;

void compare(string i, string j){
    if (i > j){
        printf(">");
        exit(0);
    }
    if (i < j){
        printf("<");
        exit(0);
    }
}

int main(){
    cin >> a >> b;
    if (a.size() < b.size()) a = string(b.size() - a.size(), '0') + a;
    if (a.size() > b.size()) b = string(a.size() - b.size(), '0') + b;
    compare(a, b);
    printf("=");
    return 0;
}
