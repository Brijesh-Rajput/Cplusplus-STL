#include<iostream>
#include<string>
#include<stdio.h>
#include"D:\Github C++\Function_Template.cpp"
using namespace std;

template<class T>
class Array
{
private:
    int capacity;
    int lastindex;
    T *ptr;
public:
    Array(int capacity);
    void AppendItem(T data);
    void InsertItem(int index,T data);
    int Count();
    T GetItem(int index);
    void DeleteItem(int index);
    void Edit(int index,T data);
    int SearchItem(T element); //Index will return of 1st occurrence of element in an array if it will found
    void View();
    ~Array();
};
template<typename T>
Array<T>::Array(int capacity)
{
    this->capacity=capacity;
    lastindex=-1; //Imp
    ptr=new T[capacity];
}
template<class T>
void Array<T>::AppendItem(T data)
{
    if(lastindex+1==capacity)
        cout<<"Overflow";
    else
    {
        lastindex++; //Or ++lastindex;  ---------->This is better
        ptr[lastindex]=data;
    }
}
template<class T>
void Array<T>::InsertItem(int index,T data)
{
    if(index<0 || index>lastindex+1)
        cout<<"Invalid Index";
    else if(lastindex+1==capacity)
        cout<<"Overflow";
    else
    {
        for(int i=lastindex;i>=index;i--)
            ptr[i+1]=ptr[i];
        ptr[index]=data;
        lastindex++;
    }
}
template<class T>
int Array<T>::Count()
{
    return lastindex+1;
}
template<class T>
T Array<T>::GetItem(int index)
{
    if(index>=0 && index<=lastindex)
       return ptr[index];
//When index is invalid then nothing will return
}
template<class T>
void Array<T>::DeleteItem(int index)
{
    if(index<0 || index>lastindex)
        cout<<"Invalid Index Or Underflow";  //lastindex=-1 and index=0 then Underflow Situation
    else                                    //lastindex=3 and index=4 then Invalid Index Situation
    {
        for(int i=index;i<lastindex;i++) //Or i!=lastindex
            ptr[i]=ptr[i+1];
        lastindex--;
    }
}
template<class T>
void Array<T>::Edit(int index,T data)
{
    if(index<0 || index>lastindex)
        cout<<"Invalid Index";
    else
       ptr[index]=data;
}
template<class T>
int Array<T>::SearchItem(T element)  //Index is returning
{
    if(lastindex>-1) //Or lastindex>=0
        for(int i=0;i<=lastindex;i++)
           if(ptr[i]==element)
               return i;
    return -1;
}
template<class T>
void Array<T>::View()
{
    printArray<T>(ptr,lastindex+1);
}
template<class T>
Array<T>::~Array()
{
    delete []ptr;
}

template<class T,class X>
class Hash
{
private:
    T data1;
    X data2;
    /*
    struct pair
    {
        T data1;
        X data2;
    }; */
public:
    Hash(T data1,X data2)
    {
        this->data1=data1;
        this->data2=data2;
    }
    T get_First_Value(){ return data1; }
    X get_second_Value(){ return data2; }
};


/* --------------------------------MAIN FUNCTION--------------------------------------------*/
int main()
{
    Array<char> a1(5);
    a1.InsertItem(0,'A');
    a1.View();
    a1.AppendItem('R');
    a1.View();
    a1.AppendItem('H');
    a1.View();
    //cout<<a1.Count();
    a1.Edit(1,'C');
    a1.View();
    a1.AppendItem('U');
    //cout<<a1.Count();
    a1.View();
    cout<<endl<<endl;

    Hash<int,char> h1(7,'A');
    cout<<h1.get_First_Value()<<" "<<h1.get_second_Value()<<endl;

    Hash<string,int> h3("Archana",143);
    cout<<h3.get_First_Value()<<" "<<h3.get_second_Value()<<endl;

    Hash<string,string> h2("Archana","Brijesh");
    cout<<h2.get_First_Value()<<" "<<h2.get_second_Value()<<endl;

}

