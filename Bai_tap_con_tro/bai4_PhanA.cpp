#include <iostream>
using namespace std;
int main()
{
    int *p=new int;
    cout<<p<<endl;
    delete p;
    cout<<p;//sau khi p được giải phóng bộ nhớ, việc cố truy cập vào p dẫn đến việc khiến p truy cập vào vùng nhớ không hợp lệ
}
