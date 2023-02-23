#include <iostream>
#include <string>
using namespace std;

class Majina
{
    public:
        string name;
        int id;
        void printName(); 
        void printId(){ cout << "The Id is: " << id <<endl; }

        Majina()
        {
            id = 12;
            name = "Sunday Jabil Phery";
        }
        Majina(int x, string n)
        {
            id = x;
            name = n;
        }
        ~Majina()
        {
            cout << "Destor called" <<endl;
        }
    private:
        /* data */
};


void Majina::printName()
{
    cout << "The name is: " << name <<endl;
}

int main()
{
    Majina jina(35, "Sundaj Phery");
    // jina.name = "Sunday Jabil";
    // jina.id = 12;
    jina.printId();
    jina.printName();
}