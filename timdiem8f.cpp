#include <bits/stdc++.h>

using namespace std;

struct point{
    public:
        int x, y;
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
};

struct line{
    public:
        int a, b, c;
        /*CONSTRUCTOR*/
        line(){
            a = 0;
            b = 0;
            c = 0;
        }
        line(point A, point B){
            a = B.y - A.y;
            b = A.x - B.x;
            c = B.x * A.y - B.y * A.x;
        }
        /*FUNCTION*/
        bool isParallel(const line other) const{
            return ((float) a * other.b == other.a * b && (float) other.a * c != a * other.c);
        }
        bool isSame(const line other) const{
            return ((float) a * other.b == other.a * b && (float) other.a * c == a * other.c);
        }
        bool isIntersac(const line other) const{
            return ((float) a * other.b != (float) other.a * b);
        }
        int f(point A){
            return a * A.x + b * A.y + c;
        }
        float distTo(point A){
            return fabs(f(A) / sqrt(a * a + b * b));
        }
};

int intersacLine(point A, point B, point C, point D){
    line x(A, B), y(C, D);
    if (x.isSame(y)) return -1;
    if (x.f(C) > 0 || x.f(D) > 0 || y.f(A) > 0 || y.f(B) > 0) return 0;
    return 1;
}

int n;

int main(){
    freopen("timdiem8f.inp", "r", stdin);
    freopen("timdiem8f.out", "w", stdout);
    int x, y;
    scanf("%d%d", &x, &y);
    point A(x, y);
    scanf("%d%d", &x, &y);
    point B(x, y);
    if (B.y * A.y > 0) B.y = -B.y;
    line d(A, B);
    printf("%.8f", (float) - d.c / d.a);
    return 0;
}
