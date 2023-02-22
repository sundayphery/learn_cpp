#include <sys/sysinfo.h>
#include <iostream>

using namespace std;

int main()
{
    struct sysinfo info;
    sysinfo(&info);
    cout << "Total RAM: " << info.totalram <<endl;
    cout << "Total SWAP: " << info.totalswap <<endl;
    cout << "Total Uptime: " << info.uptime <<endl;
}