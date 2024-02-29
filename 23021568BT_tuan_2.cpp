#include <iostream>
using namespace std;
// ham kiem tra so nguyen to - bai1
int ktNto(int n)
{   if(n==2)return 1;
    if(n==1)return 0;
    for(int i=2;i<n;i++){if(n%i==0)return 0;}
    return 1;
}
// ham ve tam giac 1 - bai2
void veTamGiac1(int n)
{    int bn=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<bn;j++)cout<<" ";
        for(int j=0;j<n-bn;j++)cout<<"*";
        bn++;
        cout<<endl;
    }
}
//ham ve tam tiac 2 - bai3
void veTamGiac2 (int n=2)
{
    int bn=1;int pp=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<pp-1;j++)cout<<" ";
        for(int j=0;j<bn;j++)cout<<"*";
        bn+=2;cout<<endl;pp--;
    }

}
//ham ve tam giac 3 - bai 4
void veTamGiac3(int n)
{
    int bn=n;int pp=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<pp-1;j++)cout<<" ";
        for(int j=0;j<(bn-1)*2+1;j++)cout<<"*";
        bn-=1;cout<<endl;pp++;
    }
}
//ham nhap mang n phan tu - bai 6
void veMang(int n)
{
   int a[100];
for (int i = 0; i < n; i++)
{
	a[i] = i+1;

}
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++) { cout << a[j] << " "; }
	cout << endl;
	int t = a[0];
	for (int j = 0; j < n - 1; j++) { a[j] = a[j + 1]; }
	a[n - 1] = t;
}
}


int main()
{
    cout<<ktNto(7);
    cout<<endl<<endl;
    veTamGiac1(5);
    cout<<endl;
    veTamGiac2(5);
    cout<<endl;
    veTamGiac3(5);
    cout<<endl;
    veMang(5);
}
