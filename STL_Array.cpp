#include<iostream>
#include<conio.h>
#include<array>
#include<complex>
//#include"D:\C++\Assignment solution\Asgn-11(Constructor)\Asgn-11_Ques-1.cpp"
using namespace std;
int main()
{
    //Q1. Create an array of int type with size 5. Print array elements from left to right.
    array<int,5> arr1={10,20,30,40,50};
    for(int x: arr1)
        cout<<x<<" ";
    cout<<endl;

    //Q2. Create an array of int type with size 10. Input numbers from user and store in the array.
    array<int,10> arr2;
    int i=1; ///
    for(auto it=arr2.begin();it!=arr2.end();it++,i++) //Or, You Can use the range for loop
    {
        cout<<"Enter Element no. "<<i<<" :-";
        cin>>*it;
    }
    cout<<"Odd numbers are :-";
    for(int x: arr2)
        if(x&1)
            cout<<x<<" ";
    cout<<endl;


    complex<float> c1(12.48,89.46);
    complex<float> c2(1.48,9.46);
    complex<float> c3(18.56,79.46);
    array<complex<float>,3> c1arr={c1,c2,c3};
    float real_sum=0,imag_sum=0;
    for(complex<float> x: c1arr)
    {
        //cout<<x<<" "<<x.real()<<" "<<x.imag()<<endl;
        real_sum+=x.real();
        imag_sum+=x.imag();
    }
    cout<<real_sum<<" "<<imag_sum<<endl;


    array<float,5> arr3;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter array element no. "<<i+1<<" :-";
        cin>>arr3[i];
    }
    cout<<"Array in reverse order :- ";
    for(auto it=arr3.rbegin();it!=arr3.rend();it++)
        cout<<*it<<" ";
    cout<<endl;

    getch();
}
