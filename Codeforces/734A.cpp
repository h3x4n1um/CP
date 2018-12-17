#include <bits/stdc++.h>

using namespace std;

int anton, danik;
string s;

int main(){
    scanf("%*d");
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == 'A') ++anton;
        else ++danik;
    }
    if (anton > danik) printf("Anton");
    else if (anton < danik) printf("Danik");
    else printf("Friendship");
    return 0;
}
