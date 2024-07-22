#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}

double divi(int x, int y)
{
    if (y != 0)
    {
        return x / y;
    }
    return -1;
}
int mul(int x, int y)
{
    return x * y;
}
int sub(int x, int y)
{
    return x - y;
}
int main()
{

    cout << "1.Add \n2.Sub \n3.Div \n4.Mul";
    int n;
    cin >> n;
    int x, y;
    cout << "Enter x and y";
    cin >> x >> y;
    switch (n)
    {
    case 1:
        cout << add(x, y);
        break;
    case 2:
        cout << sub(x, y);
        break;
    case 3:
        cout << divi(x, y);
        break;
    case 4:
        cout << mul(x, y);
        break;

    default:
        break;
    }
}
