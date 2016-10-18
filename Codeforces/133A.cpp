#include <bits/stdc++.h>

using namespace std;

const string check = "HQ9";

string s;

int main(){
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        for (int j = 0; j < check.size(); ++j){
            if (s[i] == check[j]){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
