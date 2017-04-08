#include <bits/stdc++.h>

using namespace std;

struct point{
    public:
        /*CONSTRUCTOR*/
        point(){
            x = 0;
            y = 0;
        }
        point(int _x, int _y){
            x = _x;
            y = _y;
        }
        /*OPERATOR*/
        point operator = (pair <int, int> other){
            x = other.first;
            y = other.second;
            return *this;
        }
        point operator = (const point other){
            x = other.x;
            y = other.y;
            return *this;
        }
        bool operator == (const point other) const{
            return (x == other.x && y == other.y);
        }
        bool operator != (const point other) const{
            return !(*this == other);
        }
        bool operator < (const point other) const{
            return (x < other.x || (x == other.x && y < other.y));
        }
        /*FUNCTION*/
        point readPoint(){
            scanf("%d%d", &x, &y);
            return *this;
        }
        int writePoint(){
            printf("%d %d", x, y);
            return 0;
        }
        int writelnPoint(){
            writePoint();
            puts("");
            return 0;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
    private:
        int x, y;
};

double length(point M, point N){
    return sqrt(pow(M.getX() - N.getX(), 2) + pow(M.getY() - N.getY(), 2));
}

double area(point A, point B, point C){
    double c = length(A, B);
    double b = length(A, C);
    double a = length(B, C);
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("P132SUME.inp", "r", stdin);
        freopen("P132SUME.out", "w", stdout);
    #endif // ONLINE_JUDGE
    point A, B, C;
    int N, ans = 0;
    A.readPoint();
    B.readPoint();
    C.readPoint();
    scanf("%d", &N);
    double s = area(A, B, C);
    for (int i = 1; i <= N; ++i){
        point D;
        D.readPoint();
        double s_temp = area(A, B, D) + area(A, C, D) + area(B, C, D);
        cout << s << ' ' << s_temp << endl;
        if (s == s_temp) ++ans;
    }
    printf("%.1f\n%d", s, ans);
    return 0;
}
