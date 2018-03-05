// hexoct1.cpp  -- shows hex and otcal literals
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;         // 10进制
    int waist = 0x42;       // 16进制
    int inseam = 042;       // 8进制

    cout << "Mosieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";

    return 0;
}