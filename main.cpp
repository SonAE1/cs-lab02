#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b, MAX;
    cin >> a >> b;

    max = a + b;
    if (a-b>max)
        max = a-b;

    if (a*b>max)
        max = a*b;

    if (a/b>max)
        max=a/b;


    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "max = " << max << '\n';


    return 0;
}
