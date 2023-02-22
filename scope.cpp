#include <iostream>

using namespace std;

int doStuff()
{
    return 2 + 3;
}

int count_of_function_call = 0;

void fun()
{
    count_of_function_call++;
}

int main()
{
    fun();
    fun();
    fun();

    cout << "Fun function was called " << count_of_function_call <<endl;
}