#include <iostream>
#include <math.h>
#define INT_MAX  1000
using namespace std;
int main()
{
    int max,min;
    int tongPtChan=0;
    int soPT_le=0;
    int n;cin>>n;
    int a[INT_MAX];
    for(int i=0;i<n;i++){cin>>a[i];if(i==0){max=a[0];min=a[0];}}
    for(int i=0;i<n;i++)
        {
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
            if(a[i]%2==0)tongPtChan+=a[i];
            if(a[i]%2!=0)soPT_le++;
        }
    cout<<max<<endl<<min<<endl<<tongPtChan<<endl<<soPT_le<<endl;
    // het bai 2
    int b[INT_MAX];int c[10]={};
    for(int i=0;i<n;i++){cin>>b[i];c[b[i]]++;}
    for(int i=0;i<10;i++){cout<<"so "<<i<<" xuat hien "<<c[i]<<" lan"<<endl;}
    // het bai 3
    int d[INT_MAX];double tong=0;
    for(int i=0;i<n;i++){cin>>d[i];tong+=d[i];}
    double tb,ps;

    tb=tong/n;
    tong=0;
    for(int i=0;i<n;i++){tong+=(d[i]-tb)*(d[i]-tb);}
    ps=sqrt(tong/(double)n);
    cout<<tb<<" "<<tong<<" "<<ps;
}
