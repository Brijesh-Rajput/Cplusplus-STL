#include<iostream>
#include<conio.h>
using namespace std;
void fun(int);
int main()
{
    fun(6);
    getch();
}
void fun(int n)
{
    for(int i=0;i<n;i++)
        for(int j=i;j<i*i;j++)
            if(j%i==0)
            {
                for(int k=0;k<j;k++)
                    cout<<"*";
            }
}
