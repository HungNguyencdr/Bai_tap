#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;int max=0;int min=2147483647;
    vector<int>arr(n);int tong=0;
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>max)max=arr[i];
            if(arr[i]<min)min=arr[i];
            tong=tong+arr[i];
    }
    cout<<"so nho nhat la "<<min<<endl;
    cout<<"so lon nhat la "<<max<<endl;
    cout<<"trung binh cac so "<<(double)tong/n;
}
