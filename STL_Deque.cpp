#include<iostream>
#include<conio.h>
#include<vector>
#include<deque>
using namespace std;
void reverseDeque(deque<int> &d); //here we need reference b'coz we have to do changes in original deque
vector<int> dequeToVector(deque<int> d);//here,we don't need reference we want to access only deque element
int main()
{

    deque<int> d1;

    for(int i=1;i<=5;i++)
        d1.push_back(10*i);

    deque<int>::iterator it;
    for(it=d1.begin();it!=d1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    d1.pop_front();

    for(it=d1.begin();it!=d1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    d1.insert(d1.end(),60);  //d1.push_back(60);

    for(it=d1.begin();it!=d1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    for(it=d1.begin();it!=d1.end();it++)
        if(*it==30)
            break;
    it++;
    d1.insert(it,35);
    /* OR
    for(it=d1.begin();it!=d1.end();it++)
        if(*it==30)
        {
            d1.insert(it+1,35);
            break;
        }
    */

    for(it=d1.begin();it!=d1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    reverseDeque(d1);

    for(it=d1.begin();it!=d1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    vector<int> v=dequeToVector(d1);

    //Don't use that previous it b'coz it is of deque class iterator object
    cout<<"Vector :- ";
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"Deque :- ";
    for(it=d1.begin();it!=d1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    getch();
}
void reverseDeque(deque<int> &d)
{ //One way :- we can convert dequeToForward_List and then we can reverse the forward list using predefined function and then copy all the elements of that to the original deque.
  //We will use emplace() function --> Not by push_back() function
    cout<<"Reverse Deque :- ";
    /*
    int length=0;
    for(auto it=d.begin(),it!=d.end();it++,length++);
    */   /// use stl methods instead of that
    int length=d.size();
    int i=1; auto it1=d.end();
    for(auto it=d.begin();it!=d.end() && i<length;it++,i++)
    {
        it1=d.emplace(it1,d.front());
        d.pop_front();
    }

    //Or you can use swapping concept -> only half portion swapping is required
    /*
    int x; auto it=d.begin();
    for(int i=0;i<d.size()/2;i++)
    {
        x=*(it+i);
        *(it+i)=*(it+d.size()-1-i);
        *(it+d.size()-1-i)=x;
    }
    */

}
vector<int> dequeToVector(deque<int> d)
{
    vector<int> v;
    for(auto it=d.begin();it!=d.end();it++)
        v.push_back(*it); //if we use pop_front then also v vector has has element. And There will be no change happen in the original deque.
        //b'coz here deque d is copy of original deque
    return v;
}
//============================================================================
/*  wrong code ===> goes for infinite b'coz it never becomes equals to end()
void reverseDeque(deque<int> &d)
{
    cout<<"HEllo"<<endl;
    for(auto it=d.begin();it!=d.end();it++)
    { //Here, we are not reversing the deque --> we are printing same again and agin there will be no effect due to this loopyt
        //cout<<d.front()<<" ";
        int x=d.front();
        d.push_back(x);//d.push_back(d.front());
        d.pop_front();
    }


    cout<<"Reverse Deque"<<endl;
    int length=0;
    for(auto it=d.begin();it!=d.end();it++,length++);
    int i=0;
    for(auto it=d.begin();it!=d.end()&&i<length;it++,i++)
    {
        d.push_back(d.front());
        d.front();
        cout<<*it<<" ";
    }

}
*/

