#include<iostream>
using namespace std;


int g_x = 0;

 

int main()
{

    int x = 10;

    if (g_x < 10)

    {

        int y = 2;

    }

    else

    {

        int y = 4;

    }

    x = x + y;

    cout<< "\nValue of local x is " << x;
    return 0;
}