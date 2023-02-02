#include <iostream>
using namespace std;
int main ()
{
    int num,i,a,d;
    char c;
    while (cin >> num)
    {
        a = 0;
        d = 0;
        for (i=1; i<=num; i++)
        {
            cin >> c;

            if (c == 'A')
                a = a + 1;
            else
                d = d + 1;
        }

        if (a > d)
            cout << "Anton" << endl;
        else if (d > a)
            cout << "Danik" << endl;
        else
            cout << "friendship" << endl;
    }
    return 0;
}
