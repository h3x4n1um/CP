#include <bits/stdc++.h>

using namespace std;

int n;

void read_from_to(string input, string &from, string &to){
    bool read_to = false;
    for (int i = 0; i < input.size(); ++i){
        if (input[i] != ' '){
            if (read_to) to = to + input[i];
            else from = from + input[i];
        }
        else read_to = true;
    }
}

bool check_transformation(string s, string x){
    if (s.size() != x.size()) return false;
    int different = 0;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] != x[i]){
            ++different;
            if (different > 1) return false;
        }
    }
    return true;
}

int main(){
    freopen("429.inp", "r", stdin);
    freopen("429.out", "w", stdout);
    scanf("%d", &n);
    for (int testcase = 0; testcase < n; ++testcase){
        /*INIT*/
        vector <string> adj;
        string word, input;
        /*READ*/
        cin >> word;
        while (word != "*"){
            adj.push_back(word);
            cin >> word;
        }
        /*PROCESS*/
        getline(cin, input);
        while (getline(cin, input) && input.find(" ") != string::npos && input != ""){
            /*INIT BFS*/
            string from, to;
            queue <string> q;
            map <string, int> went;
            read_from_to(input, from, to);
            q.push(from);
            went[from] = 1;
            /*PROCESS BFS*/
            while (!q.empty()){
                string u = q.front();
                q.pop();
                for (int i = 0; i < adj.size(); ++i){
                    string v = adj[i];
                    if (check_transformation(u, v) && went[v] == 0){
                        went[v] = went[u] + 1;
                        if (v == to) break;
                        q.push(v);
                    }
                }
            }
            cout << from << ' ' << to << ' ' << went[to] - 1 << '\n';
        }
        if (testcase != n - 1) printf("\n");
    }
    return 0;
}
