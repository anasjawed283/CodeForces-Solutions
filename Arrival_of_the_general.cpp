#include <iostream>
using namespace std;
int main()
{
    int num, a;
    cin >> num >> a;
    int mina(a), maxa(a), mini(0), maxi(0);
    for (int i = 1; i < num; ++i)
    {
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            maxi = i;
        }
        if (a <= mina)
        {
            mina = a;
            mini = i;
        }
    }
    cout << maxi + (num - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
    return 0;
}
