#include <bits/stdc++.h>

using namespace std;

int b, e, pos_b, pos_e, ans;

vector <int> stack_b;
vector <int> stack_e;

int main(){
    freopen("greetings.in", "r", stdin);
    freopen("greetings.out", "w", stdout);
    int temp_int;
    string temp_string;
    scanf("%d%d", &b, &e);
    for (int i = 0; i < b; ++i){
        scanf("%d", &temp_int);
        cin >> temp_string;
        if (temp_string[0] == 'L') temp_int = -1 * temp_int;
        stack_b.push_back(temp_int);
    }
    for (int i = 0; i < e; ++i){
        scanf("%d", &temp_int);
        cin >> temp_string;
        if (temp_string[0] == 'L') temp_int = -1 * temp_int;
        stack_e.push_back(temp_int);
    }
    for (int i = 0; i < min(b, e); ++i){
        int check = pos_b - pos_e;
        pos_b += stack_b[i];
        pos_e += stack_e[i];

    }
    printf("%d", ans);
    return 0;
}
