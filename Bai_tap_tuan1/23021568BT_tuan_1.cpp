#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
double bai_13_phan_B(int x,int y)
{
    double kc;
    return sqrt(x*y+y*y);
}
void bai_14_phan_B(int x)
{
    if(100-x>x)cout<<"chon the con lai";
    else if(100-x<x)cout<<"chon the x";
    else cout<<"chon the nao cung duoc";
}
string bai_15_phan_B(int x)
{   string ctl;
    string u="a";
    string v="b";
    int soLanLap=x/2;
    for(int i=0;i<soLanLap;i++)
    {
        u=v+u;
        v=u+v;
    }
    if(x==0)ctl=u;
    else if(x==1)ctl=v;
    else if(x%2==0)ctl=u;
    else {ctl=v;}
    return ctl;
}
bool bai_16_phanB(int a,int b, int c)

{
    if(a==b&&b==c)return 1;
    return 0;
}
bool bai_17_phan_B(int nam)
{
    if(nam%4==0)return 1;
    return 0;
}
double bai_18_phan_B(double x,double y,double a,double b)
{
    return (double)sqrt((x-a)*(x-a)+(y-b)*(y-b));
}
bool bai_19_phan_B(int x,int y,int z)
{
    if((y>x&&y<z)||(y<x&&y>z)){return 1;}
    else return 0;
}
bool bai_20_phan_B(int a,int b)
{
    if(a%7==0&&b%7==0)return 1;
    return 0;
}
double bai_21_phan_B(double x,double y,double z )
{
    double S;
    double NuaChuVi=(x+y+z)/2;
    S=sqrt(NuaChuVi*(NuaChuVi-x)*(NuaChuVi-y)*(NuaChuVi-x));
    return S;
}
double bai_22_phan_B(double CN,double CC)
{
    double BMI=CN/(CC*CC);
    return BMI;
}
int bai_23_phan_B(int a,int b)
{
    return (abs(a-b)+a+b)/2;
}


int main(){

}
