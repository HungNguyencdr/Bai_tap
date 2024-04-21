#include <iostream>
using namespace std;
int main()
{
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p;// dòng này gây lỗi vì xoá bộ nhớ đã cung cấp cho p, cũng đồng nghĩa là xoá bộ nhớ đã cung cấp cho p2
    *p2 = 100;// việc ghi dữ liệu vào vùng nhớ đã bị xoá có thể dẫn đến lỗi chương trình
     cout << *p2;
     delete p2;
}
