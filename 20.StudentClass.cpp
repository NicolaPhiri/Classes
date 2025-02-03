#include <iostream>
using namespace std;
class Student{
public:
string Firstname;
int age;
double gpa;
Student(string Firstname,int age, double gpa){
    this->Firstname=Firstname;
    this->age=age;
    this->gpa=gpa;
}
};
int main()
{
    Student student1("Someone",25,3.2);
    Student student2("Programming",40,1.5);
    Student student3("Another",21,4.2);
    cout<<student1.Firstname<<'\n';
    cout<<student2.Firstname<<'\n';
    cout<<student3.Firstname<<'\n';

    return 0;
}