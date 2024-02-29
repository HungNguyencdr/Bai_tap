#include <iostream>
using namespace std;
int main(){
   int n;
   while(true)
    {
        cin>>n;
        if(n==-1){cout<<"bye";break;}
        else if(n%5!=0){cout<<"-1"<<endl;}
        else cout<<n/5<<endl;
   }
}
