#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //Q1. Write a C++ Program to print first N natural numbers.
    //Ans:-
    int number1;
    cout<<"Enter a Number :-";
    cin>>number1;
    for(int i=1;i<=number1;i++)
        cout<<i<<" ";
    cout<<endl<<endl;


    //Q2. Write a C++ Program to print first N natural numbers in reverse order
    //Ans:-
    int number2;
    cout<<"Enter a Number :-";
    cin>>number2;
    for(int i=number2;i>0;i--)
        cout<<i<<" ";
    cout<<endl<<endl;


    //Q3. Write a c++ Program to print first N even natural numbers
    //Ans:-
    int number3;
    cout<<"Enter a Number :-";
    cin>>number3;
    for(int i=1;i<=number3;i++)
        cout<<2*i<<" ";
    cout<<endl<<endl;


    //Q4. Write a c++ Program to print first N odd natural number in reverse order
    //Ans:-
    int number4;
    cout<<"Enter a Number :-";
    cin>>number4;
    for(int i=number4;i>0;i--)
        cout<<2*i-1<<" ";
    cout<<endl<<endl;


    //Q5. Write a c++ program to calculate sum of first N natural numbers
    //Ans:-
    int number5;
    cout<<"Enter a Number :-";
    cin>>number5;
    int sum=0;
    for(int i=1;i<=number5;i++)
        sum+=i;
    cout<<"Sum of 1st "<<number5<<" Natural number is "<<sum;
    cout<<endl<<endl;


    //Q6. Write a c++ Program to print table of user's choice
    //Ans:-
    int number6;
    cout<<"Enter a Number :-";
    cin>>number6;
    for(int i=1;i<=10;i++)
        cout<<number6<<"*"<<i<<" = "<<number6*i<<endl;
    cout<<endl<<endl;


    //Q7. Write a C++ Program to calculate sum of squares of first N natural numbers
    //Ans:-
    int number7;
    cout<<"Enter a Number :-";
    cin>>number7;
    int sum7=0;
    for(int i=1;i<=number7;i++)
        sum7+=i*i;
    cout<<"Sum of square of 1st "<<number7<<" Natural number is "<<sum7;
    cout<<endl<<endl;


    //Q8. Write a C++ Program to calculate factorial of a number
    int number8;
    cout<<"Enter a Number :-";
    cin>>number8;
    int fact=1;
    for(int i=number8;i>0;i--)
           fact*=i;
    cout<<"Factorial is "<<fact;
    cout<<endl<<endl;

    //Q9. Write a c++ Program to count digits in a given number
    //Ans:-
    int number9;
    cout<<"Enter a Number :-";
    cin>>number9;
    int count=0;
    while(number9)
    {
        count++;
        number9/=10;
    }
    cout<<"There are total "<<count<<" digits in a given number";
    cout<<endl<<endl;


    //Q10. Write a c++ Program to calculate sum of digits in a given number
    //Ans:-
    int number10;
    cout<<"Enter a Number :-";
    cin>>number10;
    int sum10=0;
    while(number10)
    {
        sum10+=number10%10;
        number10/=10;
    }
    cout<<"Sum of digits in a given number is "<<sum10;
    cout<<endl<<endl;


    getch();
}
