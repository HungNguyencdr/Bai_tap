#include <iostream>
using namespace std;
struct Point {
    int x, y;
    void dichChuyenDiem1(Point& p) { p.x = p.x + 1; p.y = p.y + 1; }
    void dichChuyenDiem2(Point p) { p.x = p.x + 1; p.y = p.y + 1; }
    Point midpoint(Point a, Point b)const { Point v; v.x = (a.x + b.x) / 2; v.y = (a.y + b.y) / 2; return v; }

};
struct rect
{
    double x;
    double y;
    double w;
    double h;
    bool contains(Point M)const
    {
        if(M.x>=x&&M.x<=x+w&&M.y>=y&&M.x<=y+h) return 1;
        return 0;
    }
};
struct Ship
{
    rect toaDo;
    string id;
    double dx,dy;
    rect move(){toaDo.x+=dx;toaDo.y+=dy;return toaDo;}
};
void display(const Ship&ship){cout<<ship.id<<" "<<ship.toaDo.x<<" "<<ship.toaDo.y;}
int main()
{
    rect tester;
    cin>>tester.x>>tester.y>>tester.w>>tester.h;
    Point c;
    cin>>c.x>>c.y;
    cout<<tester.contains(c)<<endl;
    Ship ship1;
    ship1.toaDo.x=c.x;ship1.toaDo.y=c.y;
    ship1.id="MK2731";
    display(ship1);
}

