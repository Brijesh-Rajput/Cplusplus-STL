#include<iostream>
#include<list>
#include<conio.h>
using namespace std;
int main()
{
    list<int> l1;

    l1.push_back(10);

    l1.push_front(20);

    auto it=l1.begin(); //l1.begin()+1 --->Error:- no match for operator+ ===> B'coz random access Not allowed here
    it++;
    l1.insert(it,30);

    l1.insert(it,{22,44,33});
    //int arr[]={22,44,33};
    //l1.insert(l1.begin()+2,arr,arr+3); //Non random access

    for(int x: l1)
        cout<<x<<" ";
    cout<<endl;

    //For below line:- Don't declare again it as auto it. Error:-STL_List.cpp|25|error: conflicting declaration 'auto it'|
    it=l1.end();  //l1.end()-2  ---> Error:- Note that No random access in List
    it--;
    it--;
    *it=25;

    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<l1.front()<<endl;

    l1.pop_front();

    l1.pop_back();

    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    auto it2=l1.end(),it1=l1.begin();
    it1++;
    it2--;
    l1.erase(it1,it2);

    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    getch();
}
