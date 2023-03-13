#include<iostream>
#include<conio.h>
#include<vector>
#include<queue>  //for priority_queue --> By default vector class is used
using namespace std;

struct Batsman
{
    int totalRuns;
    int highestScore;
    int totalMatches;
    Batsman(int r,int s,int m):totalRuns(r),highestScore(s),totalMatches(m){} //lambda function
    void showData()
    { cout<<"\nTotal runs:"<<totalRuns<<"\nHighest Score:"<<highestScore<<"\nTotal Matches:"<<totalMatches; }
} ;
struct compareScore{
    bool operator()(Batsman const& b1,Batsman const& b2){
        return b1.highestScore < b2.highestScore;
    }
};
void priorityQueueToVector(priority_queue<Batsman,vector<Batsman>,compareScore>pq,vector<Batsman>&vec);
int main()
{

    priority_queue<Batsman,vector<Batsman>,compareScore> pq1;

    Batsman Rahul(2510,121,44);
    Batsman Rohit(3111,147,72);
    Batsman Virat(1088,89,20);
    Batsman Shikhar(1920,182,31);
    Batsman Pankaj(890,54,22);

    pq1.push(Rahul);
    pq1.push(Rohit);
    pq1.push(Virat);
    pq1.push(Shikhar);
    pq1.push(Pankaj);

    //cout<<"Highest Scorer Batsman name:- "<<pq1.top()<<endl; ---> error: no match for 'operator<<' (operand types are 'std::basic_ostream<char>' and 'const value_type' {aka 'const Batsman'})

    //cout<<pq1.top().showData()<<endl; --> error: passing 'const value_type' {aka 'const Batsman'} as 'this' argument discards qualifiers [-fpermissive]|
    //---> Error:- b'coz top() function returns reference of an object of Batsman structure and calls the showData() function.
    //But problem is that, internally address of an caller object is passed to the this object pointer but here we are calling function using refrence of an object not by the address of an object.

    //cout<<pq1.top().totalRuns<<pq1.top().totalMatches<<pq1.top.highestScore<<endl; //here, we can do this b'coz this variables are public members

    Batsman b=pq1.top();  //why not Batsman &b ? b'coz top() function returns reference of an object. Not an object.
    //variable which stores the reference of an object and address of an object and object return by a function
    b.showData();
    cout<<endl;
// (pq1.top()).showData();  ---> ? ? ?

    pq1.pop();

    //copy priority_queue data into a vector
    vector<Batsman> v;
    priorityQueueToVector(pq1,v);

    for(auto item : v)
    {
        item.showData();  //Don't do this mistake --> cout<<item.showData();
        cout<<endl;
    }
    cout<<endl;

    getch();
}
void priorityQueueToVector(priority_queue<Batsman,vector<Batsman>,compareScore> pq, vector<Batsman>& vec)
{
    //for(auto it)  --> NOTE:- Priority_Queue is a Container adaptor and container adaptor doesnot have an iterator.
    while(!pq.empty())
    {
        vec.push_back(pq.top());
        pq.pop();
    }
}
