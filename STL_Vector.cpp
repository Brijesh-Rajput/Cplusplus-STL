#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{
/*
    vector<int> v1(4);
    for(int i=5;i<9;i++)
        v1.emplace_back(i);
    for(int x: v1)
        cout<<x*x<<" ";
    cout<<endl;
*/
//NOTE:- the difference between above and below code

    vector<int> v2;
    for(int i=5;i<9;i++)
        v2.emplace_back(i);
    for(int x: v2)
        cout<<x*x<<" ";
    cout<<endl<<endl;


    vector<int> v3;
    vector<int>::iterator it;
    v3.push_back(10);
    v3.insert(v3.begin(),20);
    v3.insert(v3.begin()+1,4,30);
   // int a=11,b=12,c=13;
    int arr[]={11,12,13};
    v3.insert(v3.begin()+2,arr,arr+3);  //NOT v3.insert(v3.begin()+2,arr); ----> Error
    for(int x: v3)
        cout<<x<<" ";
    cout<<endl;

    vector<int> v4;
    v4.insert(v4.begin(),v3.end()-5,v3.end());
    for(int x: v4)
        cout<<x<<" ";
    cout<<endl;
    v4.erase(v4.begin()+1);
    for(int x: v4)
        cout<<x<<" ";
    cout<<endl;

    v3.erase(v3.begin()+3,v3.begin()+6); //b'coz:- [) --> cnf it
    for(int x: v3)
        cout<<x<<" ";
    cout<<endl;

    getch();
}
