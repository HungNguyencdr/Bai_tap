#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
srand (time(NULL));
char test[]={"123"};
cout<<test<<endl;
// sap xep noi bot
int arr[30];
for(int i=0;i<30;i++){arr[i]=rand();cout<<arr[i]<<" ";}
for(int i=0;i<30;i++){for(int j=0;j<29;j++){if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);}}
for(int i=0;i<30;i++)cout<<arr[i]<<endl;
}
