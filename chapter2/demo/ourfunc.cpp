// ourfunc.cpp -- defining your own function

#include <iostream>

void simon(int);    // 函数原型

int main()
{
    using namespace std;
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)     // 函数定义
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " items." << endl;
}