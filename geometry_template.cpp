#include <bits/stdc++.h>

using namespace std;

struct point{
    public:
        /*CONSTRUCTOR*/
        point(){
            x = 0;
            y = 0;
        }
        point(float _x, float _y){
            x = _x;
            y = _y;
        }
        /*OPERATOR*/
        point operator = (pair <float, float> other){
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
            scanf("%f%f", &x, &y);
            return *this;
        }
        int writePoint(){
            printf("%f %f", x, y);
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
        float x, y;
};

struct line{
    public:
        line(){
            a = 0;
            b = 0;
            c = 0;
        }
        line(point A, point B){
            a = B.getY() - A.getY();
            b = A.getX() - B.getX();
            c = B.getX() * A.getY() - B.getY() - A.getX();
        }

        bool isParallel(const line other) const{
            return ((float) a * other.b == other.a * b && (float) other.a * c != a * other.c);
        }
        bool isSame(const line other) const{
            return ((float) a * other.b == other.a * b && (float) other.a * c == a * other.c);
        }
        bool isIntersac(const line other) const{
            return ((float) a * other.b != other.a * b);
        }

        float f(point q){
            return a * q.getX() + b * q.getY() + c;
        }
    private:
        float a, b, c;
};

int n;

int intersacSegment(point A, point B, point C, point D){
    line x(A, B), y(C, D);
    if (x.isSame(y)) return -1;
    if (x.f(C) > 0 || x.f(D) > 0 || y.f(A) > 0 || y.f(B) > 0) return 0;
    return 1;
}

int main(){
    point A(1, 2), B(1, 2), C(1, 2), D(1, 2);
    cout << intersacSegment(A, B, C, D);
    return 0;
}
