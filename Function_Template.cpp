#include<iostream>
using namespace std;

//Q1.
template <typename T>
T greater(T a, T b)
{
  // a>b ? ( return a ) : return b;
    if(a>b)
        return a;
    return b;
}


//Q2.
template<class T>
void printArray(T arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}


//Q3.
template<typename T>
void sort_Array(T arr[],int size)
{
    //Modified Bubble_sort Code
    for(int r=1;r<size;r++)
    {
        int count=0;
        for(int i=0;i<size-r;i++)
            if(arr[i]>arr[i+1])
            {
                T temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                count=1;
            }
        if(count);
        else break;
    }
    cout<<"Array is Sorted by using Modified Bubble sort :- ";
    printArray<T>(arr,size);
}







