#include <iostream>
using namespace std;
char* reverse(const char a[])
{
    int size_a=0;
    int i=0;
    while(a[i]!='\0'){size_a++;i++;}
    char* result=new char[size_a+1];
    result[size_a]='\0';
    for(int i=0;i<size_a;i++)
    {
        result[i]=a[i];
    }
    for(int j=0;j<size_a/2;j++)
    {
        char t;
        t=result[j];
        result[j]=result[size_a-j-1];
        result[size_a-j-1]=t;
    }
    return result;
}
char* delete_char(const char a[], const char c)
{
    int size_a=0;
    int i=0;
    while(a[i]!='\0'){size_a++;i++;}
    for(int i=0;i<size_a;i++)
    {
        if(a[i]==c)size_a--;
    }
    char*result =new char[size_a+1];
    result[size_a]='\0';
    int j=0;
    for(int i=0;i<size_a;i++)
    {
        if(a[i]!=c)
        {
            result[j]=a[i];
            j++;
        }
    }
    return result;
}
char* pad_right(const char a[], const int n)
{

    int size_a=0;
    int i=0;
    while(a[i]!='\0'){size_a++;i++;}
    if(size_a>n)
        {
            char* result=new char[size_a+1];
            int u=0;
            for(int i=0;i<size_a;i++)
            {
                result[u]=a[i];
                u++;
            }
            result[size_a]='\0';
            return result;
        }
    size_a+=(n-size_a+1);
    char*result =new char[size_a+1];
    int u=0;
    for(int j=0;j<size_a;j++)
    {
        result[u]=a[j];
        u++;
    }
    for(int j=0;j<size_a-n;j++)
    {
        result[u]=' ';
        u++;
    }
    result[size_a]='\0';
    return result;
}
char*pad_left(const char a[], const int n)
{
    int size_a=0;
    int i=0;
    while(a[i]!='\0'){size_a++;i++;}
    if(size_a+1>n)
        {
            char* result=new char[size_a+1];
            int u=0;
            for(int i=0;i<size_a;i++)
            {
                result[u]=a[i];
                u++;
            }
            result[size_a]='\0';
            return result;
        }
    int soDauCach=n-size_a-1;
    char*result =new char[size_a+1];
    int u=0;
    for(int j=0;j<soDauCach;j++)
    {
        result[u]=' ';
        u++;
    }
    for(int j=0;j<size_a;j++)
    {
        result[u]=a[j];
        u++;
    }
    result[size_a]='\0';
    return result;
}
char*truncate(const char a[],const int n)
{
    int size_a=0;
    int i=0;
    while(a[i]!='\0'){size_a++;i++;}
    if(size_a+1<n)
    {
            char* result=new char[size_a+1];
            int u=0;
            for(int i=0;i<size_a;i++)
            {
                result[u]=a[i];
                u++;
            }
            result[size_a]='\0';
            return result;
    }
    int SoKiTuXoa=size_a-n;
    char*result =new char[size_a+1];
    int u=0;
    for(int j=0;j<size_a-SoKiTuXoa;i++)
    {
        result[u]=a[i];
        u++;
    }
    result[size_a]='\0';
    return result;
}
char*trim_left(const char a[])
{
   int size_a=0;
   int viTriBatDau;
   int i=0;
   while(a[i]!='\0'){size_a++;i++;}
   i=0;
   while(a[i]==' ')
   {
       if(a[i+1]!=' '){viTriBatDau=i+1;break;}
        i++;
   }
   char*result =new char[size_a+1];
   int u=0;
   for(int i=viTriBatDau;i<size_a;i++)
   {
       result[u]=a[i];
       u++;
   }
   result[u]='\0';
   return result;
}
char *trim_right(char a[])
{
    int size_a=0;
    int i=0;
    while(a[i]!='\0'){size_a++;i++;}

}
int main()
{

}
