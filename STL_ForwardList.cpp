#include<iostream>
#include<conio.h>
#include<forward_list>
using namespace std;
/*
l1={20,40,60,80,100,120};  ========> forward list
    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
*/
int main()
{
    forward_list<int> l1;

    l1.push_front(10);

    l1.emplace_front(20);

    l1.emplace_after(l1.begin(),30);

    auto it=l1.begin();
    it++;
    l1.insert_after(it,22);

    int length=0;
    for(int x:l1)
        length++;
    cout<<"No. of Elements :-"<<length<<endl;

    for(int x:l1)
        cout<<x<<" ";
    cout<<endl;

    it=l1.end(); //Only forward iterator
    //it--;  D:\Github C++\STL_ForwardList.cpp|29|error: no 'operator--(int)' declared for postfix '--' [-fpermissive]|

    auto it1=l1.begin();
    while(it1!=l1.end())
    {
        it=it1;
        it1++;
    }
    l1.emplace_after(it,35);

    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    int i=1;
    for(it=l1.begin();it!=l1.end()&&i<length;it++,i++);
    *it=75;

    cout<<l1.front()<<endl;

    l1.pop_front();

    l1.erase_after(l1.begin(),l1.end()); //first inclusion second excluded

    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    /*
    // as list contains only one value so length value is also changed due to deletion of some value
    for(it=l1.begin(),length=0;it!=l1.end();it++,length++);
    i=1;  //Note Here i starts not from 1
    for(it=l1.begin();it!=l1.end()&&i<=length;it++)
        if(i==length)
            break;
    */ //Or
    it=l1.begin();
    l1.insert_after(it,{20,40,60,80,100,120});
    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    it=l1.begin();
    l1.erase_after(it);

    l1.remove(100);

    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    l1.reverse();

    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    getch();
}
