#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=5;
    int &y=x;
    int *z=&x;

    cout<<y<<" "<<z<<endl;
    cout<<&x<<" "<<y<<" "<<z<<endl;
    cout<<*z<<" "<<&y<<endl;

}
