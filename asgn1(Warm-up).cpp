/* Swap --> Bitwise operator {Digital_fundamentals(Logic Gates)}
   std::cout.operator<<("Hello World").operator<<(std::endl);
 */

#include<iostream>
#include<conio.h>
#include<string>  //Header file of Cpp string
using namespace std;
int main()
{
    //Q1. Write a C++ Program to print Hello World on the screen
    //Ans:-
    cout<<"Hello World"<<endl;
    //cout.operator<<("Hello World")<<endl;  ===> Doesn't work But Why?
    std::cout<<"Hello World"<<endl;
    cout<<endl;

    //Q2. Write a C++ Program to Print Hello in the first line and World in the second line
    //Ans:-
    cout<<"Hello\nWorld"<<endl;
    cout<<"Hello"<<endl<<"World"<<endl; //insertion operator returns an object of ostream class
    cout<<endl;

    //Q3. Write a C++ Program to add two numbers taken from user
    //Ans:-
    int x,y;
    cin>>x>>y; //this is an extraction operator
    cout<<"Addition of two number "<<x<<" and "<<y<<" is "<<x+y<<endl;
    cout<<endl;

    //Q4. Write a C++ Program to calculate area of circle
    //Ans:-
    int r;
    cin.operator>>(r);
    cout<<"Area of circle is "<<3.14*r*r<<endl;
    cout<<endl;

    //Q5. Write a C++ Program to calculate area of reectangle
    //Ans:-
    int l,b;
    cin.operator>>(l).operator>>(b);
    string str1="Area of rectangle is ";
    cout<<"Area of rectangle is "<<l*b<<endl;
    //cout.operator<<(str1).operator<<(l*b).operator(endl);
    //cout.operator<<("Area of rectangle is ").operator<<(l*b).operator(endl);
    cout<<endl;

    //Q6. Write a C++ Program to calculate Volume of cuboid
    //Ans:-
    int length,breadth,height;
    cin>>length>>breadth>>height;
    cout<<"Volume of cuboid is "<<length*breadth*height<<endl;
    cout<<endl;


    //Q7. Write a C++ Program to calculate average of three numbers
    //Ans:-
    int a1,b1,c1;
    cin>>a1>>b1>>c1;
    cout<<"Average of three numbers is "<<(a1+b1+c1)/2.0<<endl;
    cout<<endl;

    //Q8. Write a CPP program to swap values of two int variables
    //Ans:-
    int a2=5,b2=7;
    //1st Method:- using temporary variable
    int temp=a2;
    a2=b2;
    b2=temp;
    cout<<"1st Method:- Value of a is "<<a2<<" and b is "<<b2<<endl;
    //2nd Method:-using operation
    //3rd Method:-using bitwise operator

    //Q9. Write a C++ Program which takes a character from user and displays its ASCII Code.
    //Ans:-
    char ch;
    cin>>ch;
    cout<<"Ascii Code of character "<<ch<<" is "<<(int)ch<<endl;
    cout<<endl;

    //Q10. Write a C++ Program to calculate simple interest
    //Ans:-
    int p,n;
    float rn;
    cin>>p>>rn>>n;
    cout<<"Simple interest is "<<p*r*n/100.0<<endl;

    getch();
}


