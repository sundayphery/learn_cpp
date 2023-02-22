#include <iostream>
using namespace std; 

int main()
{
    int array[] = {1,5,7,3,4};
    int *ptr = array;
    cout << ptr <<endl;
    cout << *(ptr + 2) <<endl;
}