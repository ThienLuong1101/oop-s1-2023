#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    string ID;
    int age;
};

void print_student(student a){
    cout << a.name << " " << a.ID << " " << a.age << endl;
}

void print_student_ptr(student *p){
    cout << p->name << " " << p->ID << " " << p->age << endl;
}
int main() {
    student s1;
    student *p;
    
    s1.name = "An";
    s1.ID = "a1876498";
    s1.age = 19;

    p = &s1;

    print_student(s1);
    print_student_ptr(p);

    return 0;
}