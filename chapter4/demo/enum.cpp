// enum.cpp -- enum structure
#include <iostream>
int main()
{
    using namespace std;
    enum Color{red, blue, green};
    Color r = red;
    switch(r)
    {
        case red:
            cout << "red\n";
            break;
        case blue:
            cout << "blue\n";
            break;
        case green:
            cout << "green\n";
            break;
    }

    return 0;
}
