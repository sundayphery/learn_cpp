#include <iostream>
using namespace std;

int count = 0;
void printNumber(int num)
{
    cout << num;
    if(num < 9 )
    {
        printNumber( num + 1);
    }
    count++;
    cout << num;
}

int main()
{
    printNumber(1);
    cout <<endl << count <<endl;
}