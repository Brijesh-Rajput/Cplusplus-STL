#include<iostream>
#include<conio.h>
#include<stack>
#include<vector>
#include<deque>
//#include<algorithm>
using namespace std;
stack<int,vector<int>> reverseStack(stack<int,vector<int>> s); //error: 'stack' does not name a type; did you mean 'stat'?|   ==> These error comes b'coz we have written using namespace std; after that.
vector<int> stackToVector(stack<int,vector<int>> &s); //error: 'vector' does not name a type; did you mean 'perror'?|        ===^  That's Why compiler doesn't know that data type
//using namespace std;  --> Don't write here(after using of predefined class vector and stack which is defined in std namespace)
int main()  //Q. Then why we are declaring #include<vector> ?
{

    //stack<int> s1;//Or stack<int,deque<int>> s1; //by default - uses deque container classes
    stack<int,vector<int>> s1;

    for(int i=1;i<=5;i++)
        s1.push(10*i);

    cout<<s1.top()<<endl;

    s1.pop();

    cout<<s1.top()<<endl;

    //Reverse Stack elements
    s1=reverseStack(s1);

    cout<<s1.top()<<endl;

    vector<int> v=stackToVector(s1);

    for(int item:v) //or you can also use auto if you don't know the data_type of the content of the container
        cout<<item<<" ";
    cout<<endl;

    cout<<s1.top()<<endl;

    getch();
}
vector<int> stackToVector(stack<int,vector<int>> &s)
{//B'coz here reference of stack is passed. (when reference or address passed then changes will happen in original stack)
    //To avoid changes in original stack. we will copy the content of original stack into the other stack i.e s_copy.
    stack<int,vector<int>> s_copy(s); //by doing this no change will happen in original stack.
    vector<int> vec;
    while(!s_copy.empty())  //We can't use range for loop as we doesn't have iterator in Stack(Container Adaptors)
    {
        vec.push_back(s_copy.top());
        s_copy.pop();
    }
    return vec;
    /* Mysir Method
        int x;
        vector<int> vec;
        while(!s.empty()){
            x=s.top();
            s.pop();
            vec.push_back(x);
        }
        for(auto data: vec)
            s.push(data)
        return vec;
    */
}
stack<int,vector<int>> reverseStack(stack<int,vector<int>> s)
{   //IMP
    //NOTE:- No need to create a duplicate stack b'coz in this function reference is not passed or address.Copy of stack is passed to this stack.
    //stack<int,vector<int> s_copy(s);
    stack<int,vector<int>> reverseStack;
    while(!s.empty())
    {
        reverseStack.push(s.top());
        s.pop();
    }
    return reverseStack;
}
/* Wrong--> I have done Blunder Mistake here
stack<int,vector<int>> reverseStack(stack<int,vector<int>> s)
{

    stack<int,vector<int> s_copy(s);
    stack<int,vector<int> reverseStack;
    for(!s_copy.empty()) ----------------------------NOTE:- Don't use for loop instead of While loop.  Syntax Mistake
    {
        reverseStack.push(s_copy.top());
        s_copy.pop();
    }
    return reverseStack;
}
*/
