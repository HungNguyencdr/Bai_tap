#include <iostream>
using namespace std;
int main()
{
    int pp=0;
    cout<<"12 midnight"<<endl;
    string defaultzz=" am";
    for(int i=1;i<24;i++)
    {
        if(i!=12)
       {
            cout<<i<<defaultzz<<endl;
       }
       else
        {
            defaultzz=" pm";
            cout<<"12 noon"<<endl;
       }
    }
}
