#include <iostream>
using namespace std;
struct Point {
    int x, y;
    void dichChuyenDiem1(Point& p) { p.x = p.x + 1; p.y = p.y + 1; }
    void dichChuyenDiem2(Point p) { p.x = p.x + 1; p.y = p.y + 1; }
    Point midpoint(Point a, Point b)const { Point v; v.x = (a.x + b.x) / 2; v.y = (a.y + b.y) / 2; return v; }

};
void print(Point p) {
    cout << p.x << " " << p.y;
}


int main()
{
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);
    cout << endl;
    point.dichChuyenDiem2(point);
    cout << point.x << " " << point.y << endl;
    point.dichChuyenDiem1(point);
    cout << point.x << " " << point.y << endl;
}
