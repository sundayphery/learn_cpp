#include <iostream>
#include <string>

using namespace std;

class Person
{
    int32_t id;
    string name;

    public:
        void set_p()
        {
            cout << "Enter the id: ";
            cin >> id;
            fflush(stdin);
            cout << "Enter the name: ";
            cin >> name;
        }

        void display_p()
        {
            cout << endl << id << "\t" << name <<"\t";
        }
};

class Student: private Person
{
    string course;
    int32_t fee;

    public:
        void set_s()
        {
            set_p();
            cout << "Enter your course name: ";
            cin >> course;
            cout << "Enter your fee: ";
            cin >> fee;
        }

        void display_s()
        {
            display_p();
            cout << course << "\t" << fee <<endl;
        }
};

int main()
{
    Student s;
    s.set_s();
    s.display_s();
}