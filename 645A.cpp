#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int pos1, pos2;

int main(){
    for (int i = 0; i < 2; ++i){
        string temp;
        cin >> temp;
        s1 = s1 + temp;
    }
    for (int i = 0; i < 2; ++i){
        string temp;
        cin >> temp;
        s2 = s2 + temp;
    }
    for (int i = 0; i < 4; ++i){
        if (s1[i] == 'X') pos1 = i;
        if (s2[i] == 'X') pos2 = i;
    }
    if (pos1 + pos2 != 3){
        swap(s1[pos1], s1[pos2]);
    }
    if (s1 == s2) printf("YES");
    else printf("NO");
    return 0;
}
