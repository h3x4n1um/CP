#include <bits/stdc++.h>

using namespace std;

ifstream input;
ofstream output;
pair <int, int> ans;

int main(){
    input.open("chief.inp");
    for (int i = 1; i <= 5; ++i){
        int point = 0;
        for (int j = 1; j <= 4; ++j){
            int temp;
            input >> temp;
            point += temp;
        }
        if (ans.second < point) ans = make_pair(i, point);
    }
    input.close();
    output.open("chief.out");
    output << ans.first << ' ' << ans.second;
    output.close();
    return 0;
}
