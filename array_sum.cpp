#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int sum_array(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
       sum += array[i];
    }
    return sum;
    
}

int main()
{
    int size = 52;
    int deck[size];
    
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        deck[i] = rand();
    }

    cout << sum_array(deck, size) <<endl;
    
}