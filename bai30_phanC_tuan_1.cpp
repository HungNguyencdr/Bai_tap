#include <iostream>
using namespace std;
int main()
{
    int n;cin>>n;int sodau=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<sodau;j++)cout<<"*";
        cout<<endl;
        sodau--;
    }


}
