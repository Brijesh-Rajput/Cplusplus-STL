#include<conio.h>
#include<iostream>
#include<set> //set is bidirectional
using namespace std;

struct score
{
    int runs;
    int wickets;
    score(int r,int w):runs(r),wickets(w){ }      //-------> What is this ? --> is it a constructor in structure.
};
struct compareRuns{
    //define function call operator here
    bool operator()(score &s1,score &s2){ return s1.runs<s2.runs; }//In Increasing order
};
struct compareWickets{
    //define function call operator here
    bool operator()(score s1,score s2){ return s1.wickets>s2.wickets; } //In Decreasing order
};
void displayByRuns(set<score,compareRuns> &s);
void displayByWickets(set<score,compareWickets>&s);

int main()
{

   //score s1,s2,s3,s4; //error: no matching function for call to 'score::score()
    score score1(4,5),score2(100,2),score3(20,3),score4(70,6);

    set<score,compareWickets> s1;

    s1.insert(score1);
    s1.insert(score2);
    s1.insert(score3);
    s1.insert(score4);

    //highest wicket to lowest wicket
    displayByWickets(s1);

    set<score,compareRuns> s2;

    s2.insert(score1);
    s2.insert(score2);
    s2.insert(score3);
    s2.insert(score4);

    //lowest runs to highest runs
    displayByRuns(s2);

    //find and print scores only having centuries in the set of scores s2
    //use algorithms to find it. ---> score>=100

    getch();
}
void displayByRuns(set<score,compareRuns>&s)
{
    //code here to print set elements
    for(auto x:s)
        cout<<x.runs<<" ";
    cout<<endl;
}
void displayByWickets(set<score,compareWickets>&s)
{
    //code here to print set elements
    for(auto x:s1)
        cout<<x.wickets<<" ";
    cout<<endl;
    /*  OR
    for(auto it=s1.begin();it!=s1.end();it++)
        cout<<it->wickets<<" "; //(*it).wickets
    cout<<endl;
    */
}
