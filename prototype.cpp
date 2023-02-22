#include <iostream>

using namespace std;

// function prototype for add
int add(int x, int y);

int main()
{
    int result = add(1,2);
    cout << "The result is " << result << endl;
    cout << "Adding 4 and 5 is " << add(4,5) << endl;
}

int add(int x, int y)
{
    return x + y;
}