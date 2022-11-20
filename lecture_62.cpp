#include <iostream>
using namespace std;
class student
{
private:
    int age;
    float marks;
    string name;

public:
    student()
    {
        age = 18;
        marks = 98.5;
        name = "Code with MU";
    }
    int getAge();
    friend string getName();
    friend float getMarks();
    friend void PrintAgeAndSalary();
};
class teacher
{
private:
    int salary;

public:
    teacher()
    {
        salary = 80000;
    }
    friend void PrintAgeAndSalary();
};
int student::getAge()
{
    student s;
    return s.age;
}
string getName()
{
    student s;
    return s.name;
}
float getMarks()
{
    student s;
    return s.marks;
}
void PrintAgeAndSalary()
{
    student s;
    teacher t;
    cout << "The age is : " << s.age << endl;
    cout << "The salary  is : " << t.salary << endl;
}
int main()
{
    student s;
    cout << "The age is :" << s.getAge() << endl;
    cout << "The name is :" << getName() << endl;
    cout << "The marks is :" << getMarks() << endl;
    cout << "Friend function of two classes called" << endl;
    PrintAgeAndSalary();
    return 0;
}