#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <ctime>
using namespace std;
bool Bai5(int x)
{
    for(int i=2;i<=sqrt(x);i++){if(x%i==0)return 0;}
    return 1;
}
int Bai6(int a,int b)
{
    if(a<b){swap(a,b);}
    if(a%b==0){return b;}
    else return Bai6(b,a%b);
}
void Bai7(int M,int N)
{
    for(int i=0;i<M;i++){cout<<" ";}
    for(int i=0;i<N;i++){cout<<"*";}
    cout<<endl;
}
int Bai_9(int n)
{
    int x=n+1;
    while(x>n){x=rand();}
    return x;
}
string Bai_11_CS10(int n)
{
    string s="";
    while(n>0)
    {
        char t=char((n%2)+48);
        s=t+s;
        n=n/2;
    }
    return s;
}
int Bai_11_CS2(string s)
{
    int t=s.length();
    int so=0;
    for(int i=t-1;i>=0;i--)
    {
       so=so+pow(2,i)*((int)s[t-i-1]-48);
    }
    return so;
}
int bai_8_co_dung_ham(double n)
{
    if(ceil(n)-n>n-floor(n)) return floor(n);
    return ceil(n);
}
int bai_8_khong_dung_ham(double n)
{
    return (int)round(n);
}
int main()
{
    srand(time(0));
    //int n;cin>>n;for(int i=2;i<n;i++){if(Bai5(i)==1)cout<<i<<" ";} - doan code thu nghiem cho bai 5

    //int a,b;cin>>a>>b;if(Bai6(a,b)==1)cout<<"day la hai so nguyen to cung nhau";else cout<<"day khong phai la 2 sos nguyen to cung nhau";- doan code thu nghiem bai 6

//    int n;cin>>n;
//    for(int i=0;i<n;i++)
//    {
//        Bai7(n-1-i,1+(i-1)*2);
//    }
// code thu nghiem cho bai 7
    string s=Bai_11_CS10(678);
    cout<<s<<" "<<Bai_11_CS2(s);
}
