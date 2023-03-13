/*
see Q1. conditional operator ==> But it will not applicable when we want to print value of variable also --> see in Ques 9
Q10. --> switch case for some sequence
*/
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    //Q1. write a C++ program to check whether a given number is divisible by 7 or not.
    //Ans:-
    int number1;
    string s;
    cout<<"Enter a Number :-";
    cin>>number1;
    //number%7?cout<<"Not Divisible by 7":cout<<"Divisible by 7";
    s=number1%7?"NOT Divisible by 7":"Divisible by 7";
    cout<<s<<endl<<endl;


    //Q2. Write a C++ program to check whether a triangle is right angled triangle or not. Takes lengths of the sides from the user.
    //Ans:-
    int l1,l2,l3;
    cout<<"Enter the length of sides of a Triangle :-";
    cin>>l1>>l2>>l3;
    if(l1*l1 + l2*l2 == l3*l3 || l2*l2 + l3* l3 == l1*l1 || l3*l3 + l1*l1 == l2*l2)
        cout<<"Triangle is right angled Triangle";
    else
        cout<<"Triangle is not a right angled Triangle";
    cout<<endl<<endl;


    //Q3. Write a C++ Program to check whether a given number is a valid octal number or not.
    //Ans:-
    int number3;
    cout<<"Enter an Octal Number :-";
    cin>>number3;
    while(number3)
    {
        if(number3%10>7)
            break;
        number3/=10;
    }
    number3?cout<<"Not an Octal Number":cout<<"Its a Valid Octal Number";
    cout<<endl<<endl;


    //Q4. Write a C++ Program to find nature of roots of quadratic equation.
    //Ans:-
    cout<<"Quadratic Equation :- ax^2+bx+c=0 \n"<<"Enter coefficient of x^2,x and constant(c) :-";
    int a4,b4,c4;
    cin>>a4>>b4>>c4;
    int d4=b4*b4-4*a4*c4;
    if(d4<0)
        cout<<"NO Real roots";
    else if(d4==0)
        cout<<"Real and Equal roots";
    else
        cout<<"Real and Unequal roots";
    cout<<endl<<endl;


    //Q5. Write a C++ Program to compare two numbers.
    //Ans:-    Comparison But on What basis ?

    //Q6. Write a c++ Program to check whether a given number is positive, negative or zero.
    //Ans:-
    int number6;
    cout<<"Enter a number :-";
    cin>>number6;
    if(number6>0)
        cout<<"Number is positive";
    else if(number6<0)
        cout<<"Number is Negative";
    else
        cout<<"Number is Zero";\
    cout<<endl<<endl;


    //Q7. Write a C++ Program to check whether a given number is even or odd.
    //Ans:-
    int number7;
    cout<<"Enter a Number :-";
    cin>>number7;
    number7&1?cout<<"Number is odd":cout<<"Number is even";
    cout<<endl<<endl;


    //Q8. Write a C++ Program to check Whether a given year is a leap year or not.
    //Ans:-
    int year;
    cout<<"Enter a year :-";
    cin>>year;
    year%4==0 && year%100!=0 || year%100==0 && year%400==0 ?cout<<"Leap Year":cout<<"Not a Leap Year";
    cout<<endl<<endl;


    //Q9. Write a C++ Program to find the greater among 3 given numbers.
    //Ans:-
    cout<<"Enter three numbers :-";
    int num_1,num_2,num_3;
    cin>>num_1>>num_2>>num_3;
    num_1>num_2?(num_1>num_3?cout<<num_1<<" is greater number":cout<<num_3<<" is greater number"):(num_2>num_3?cout<<num_2<<" is greater number":cout<<num_3<<" is greater number");
    cout<<endl<<endl;


    //Q10. Write a C++ Program to check Whether a given character is a digit, lowercase alphabet, uppercase alphabet or a special character.
    //Ans:-
    cout<<"Enter a Character :-";
    char ch;
    //cin>>ch;
    ch=getch();
    //digit :- ASCII code ==> 48 to 57 (0-9)
    //lowercase :- 97 to 122
    //uppercase :- 65 to 90
    switch(ch)
    {
    case 48 ... 57:
        cout<<"Given Character is a digit";
        break; //Don't forget to write break stmt  ==> compare this with python switch case
    case 65 ... 90:
        cout<<"Given character is a uppercase alphabet";
        break;
    case 97 ... 122:
        cout<<"Given character is a lowercase alphabet";
        break;
    default: //In python-> case default --->cnf it
        cout<<"Given character is a special character";
    }
    cout<<endl<<endl;


  getch();
}

