#include <iostream>
#include <chrono>
#include <ctime>
#include <string>

using namespace std;

string today();

int main()
{
    /* 
    Things to do for weather application 
    1. Tell people what does app is about
    2. Get weather data of Arusha from internet 
    3. Save weather data in file in form of cvs
    4. Display data
    5. Enable people to request data base on their location
    6. Handle errors
    */
    // Get current date    

    // 1. Tell people about application 
    cout << "Welcome to Qubit Weather App" <<endl;   
    cout << "The application show weather information of Moshi" <<endl;  
    cout << "Date is : " << today(); 
    cout << "Temperature (C) is : " <<endl; 
    cout << "Rain  : " <<endl; 
    cout << "Thank your for using our application " <<endl; 
}

// Function to get current data
string today()
{
    auto now = chrono::system_clock::now();
    time_t t = chrono::system_clock::to_time_t(now);
    return ctime(&t);
}