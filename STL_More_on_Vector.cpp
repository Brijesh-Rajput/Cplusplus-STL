#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{

    vector<vector<int>> vec;
    vector<int> v1={0};
    vector<int> v2={10,20,30,60,70};
    vector<int> v3={15,89,62,43,56,18,73};

    vec.push_back(v1);
    vec.insert(vec.end(),{v2,v3}); //What is this --> {} ?

    for(vector<int> x: vec)
    {
        for(int element: x)
            cout<<element<<" ";
        cout<<endl;
    }

    getch();
}
