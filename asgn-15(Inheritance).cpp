#include<iostream>
#include<random>
#include<string>
std::default_random_engine generator;
std::uniform_int_distribution<int> distribution(100000,999999);
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    void setName(string name){ this->name=name;}
    string getName(){ return name;}
    void setAge(int age){ this->age=age;}
    int getAge(){ return age; }
};
class Employee : protected Person  //Note:-Inheritance type is protected not public
{
private:
    int empid;
    float salary;
    static int TotalEmployee;
protected:
    void auto_Generate_Empid(){ empid=distribution(generator); }  //consider 6 digit employee id
public:
    Employee(){ auto_Generate_Empid(); TotalEmployee++; }
    void setEmployeeData(string name,int age,int empid,float salary)
    {
        this->empid=empid;
        this->salary=salary;
        setName(name);
        setAge(age);
    }
    void showEmployeeData()
    {
        cout<<empid<<" "<<getName()<<" "<<getAge()<<" "<<salary;
    }
    int countEmployee(){ return TotalEmployee; }  //return getTotalEmployee();
};
int Employee::TotalEmployee=0;
int main()
{
    Employee e1,e2,e3;

}
