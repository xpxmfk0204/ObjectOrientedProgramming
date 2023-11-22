#include <iostream>
using namespace std;
class Person {
    public:
    Person(int x) { cout << "Person::Person(int ) called" << endl;}
    Person() {
        cout << "Person::Person() called" << endl;
        many_person = 15;
    }
    int many_person;
};
class Faculty : virtual public Person {
    public:
    Faculty(int x) : Person(x) {
        cout << "Faculty::Faculty(int ) called" << endl;
        many_faculty = 5;
    }
    int many_faculty;
};
class Student : virtual public Person {
    public:
    Student(int x) : Person(x) {
        cout << "Student::Student(int ) called" << endl;
        many_student = 10;
    }
    int many_student;
};
class TA : public Faculty, public Student {
    public:
    TA(int x):Student(x), Faculty(x) {
        cout << "TA::TA(int ) called" << endl;
        cout << "number of faculty: " << many_faculty << endl;
        cout << "number of student: " << many_student << endl;
        cout << "number of person: " << many_person << endl;
    }
};

int main(void) {
    TA ta1(30);
    return 0;
}