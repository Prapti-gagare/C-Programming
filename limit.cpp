#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long int f = 1;
    for(int i=1;i<=30;i++)
    {
        if(f > LONG_MAX/i)
        {
            cout << "Overflow at " << i << "!\n";
            break;
        }
        f *= i;
        cout << i << "! = " << f << endl;
    }
}
