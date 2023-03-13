#include<iostream>
#include<conio.h>
#include<queue>
#include<vector>
#include<stack>
#include<list>
//Q. Why can't i declare the function here, before the using namespace std; ?  ==> If want to declare then i have to compulsorily use std::
using namespace std;
vector<int> queueToVector(queue<int,list<int>> q);
queue<int,list<int>> reverseQueue(queue<int,list<int>> q);
int main()
{
    queue<int,list<int>> q1;

    for(int i=1;i<=5;i++)
        q1.push(10*i);

    cout<<q1.front()<<" "<<q1.back()<<endl;

    q1.pop();

    cout<<q1.front()<<" "<<q1.back()<<endl;

    //Reverse queue elements
    q1=reverseQueue(q1);

    cout<<q1.front()<<" "<<q1.back()<<endl;

    //copy queue data into a vector
    vector<int> v=queueToVector(q1);

    for(auto item: v)
        cout<<item<<" ";
    cout<<endl;

    cout<<q1.front()<<" "<<q1.back()<<endl;

    getch();
}
vector<int> queueToVector(queue<int,list<int>> q)
{
    vector<int> vec;  //Don't write like this --> vector<int> vec(q); b'coz vector is not implemented using queue class. queue is implemented using list or deque class so object of this can be passed to the constructor of queue class.
    //there is no iterator in container Adaptor
    while(!q.empty())
    {
        vec.push_back(q.front());
        q.pop();
    }
    return vec;  //Q. It is also like an array which is created inside this function and returned from this function. Then why vector doesn't destroy ? like in an array.
}
queue<int,list<int>> reverseQueue(queue<int,list<int>> q)
{
    queue<int,list<int>> reverseq1;
    stack<int> s1; //by default stack is implemented by deque
    //Mysir :- stack<int,list<int>> s1;
    while(!q.empty())
    {
        s1.push(q.front());
        q.pop();
    }
    while(!s1.empty())
    {
        reverseq1.push(s1.top());
        s1.pop();
    }
    return reverseq1;
}
