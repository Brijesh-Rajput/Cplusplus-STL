#include<deque>
#include<iostream>
using namespace std;
void deque_push_back_experiment()
{
    deque<int> d1;
    for(int i=1;i<=5;i++)
        d1.push_back(10*i);
    for(int x: d1)
        cout<<x<<" ";
    cout<<endl;

    auto it=d1.end();
    for(int i=1;i<=5;i++)
        it=d1.emplace(it,2*i);
    for(int x: d1)
        cout<<x<<" ";
    cout<<endl;  //see Output :- Thats why we are using emplace function to reverse the deque

    int i=1;
    for(auto it=d1.begin();it!=d1.end();it++,i++)
    {
        cout<<"Hi"<<" "<<d1.front();
        d1.pop_front();
        cout<<" "<<*it<<" "<<*(d1.begin())<<" "<<*(d1.end()-1);
        d1.push_back(4*i);
        cout<<" "<<*(d1.end()-1)<<endl;
    }
    for(int x: d1)
        cout<<x<<" ";
    cout<<endl;

    cout<<endl<<"Experiment"<<endl;
    int length=0;
    for(auto it=d1.begin();it!=d1.end();it++,length++);
    i=1;
    for(auto it=d1.begin();it!=d1.end()&&i<length;it++,i++)  //same like str[i]
    {
        d1.push_back(d1.front());
        d1.pop_front();
        cout<<*it<<" ";
    }
    cout<<endl;
    for(int x: d1)
        cout<<x<<" ";
    cout<<endl;
}
int main()
{
    deque<int> d;
    for(int i=1;i<=5;i++)
        d.push_back(i*10);
    for(int x:d)
        cout<<x<<" ";
    cout<<endl;

    //d.emplace(d.begin()-1,99);//error
    for(int x:d)
        cout<<x<<" ";
    cout<<endl;

    int i=1;
    for(auto it=d.begin();it!=d.end();it++,i++)
    {//when we are doing changes at beginning then new element inserted as first. There is no shifting is happen. Similar like a push_back() as we have done
        //cout<<*(d.end()-1)<<endl;
        cout<<d.front()<<" "<<*it<<" "<<*(d.end()-1)<<" ";
        d.push_front(2*i);
        cout<<d.front()<<" "<<*it<<" "<<*(d.end()-1)<<endl; //to see that whether shifting is happen or not
    }
}
/*=================================          NOTE       ================================================*
NOTE:-//here, we can cnf that at compile time the value of begin and end is putted thats why its not change during execution
int length=0;  ---------Wrong notes
for(auto it=d.begin();it!=d.end();it++,length++);
int i=0;
for(auto it=d.begin();it!=d.end()&&i<length;it++,i++)
{
    d.push_back(d.front());
    d.front();
    cout<<*it<<" ";
}
*/
