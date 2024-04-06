#include <iostream>
using namespace std;
void bai2(int *a)
{
    cout<<a[0];
}
int count_even(int*a, int b)
{
    int c=0;
    for(int i=b;i<5;i++){if(a[i]%2==0)c++;}
    return c;
}

int main()
{
    int *a=new int[5];
    for(int i=0;i<3;i++){a[i]=i;}
    bai2(a);cout<<endl;
    cout<<count_even(a,0);
    delete []a;
}
