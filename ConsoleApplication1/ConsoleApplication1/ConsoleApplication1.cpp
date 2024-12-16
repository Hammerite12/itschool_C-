#include <iostream>

using namespace std;

int my_func(int a, int b, int c) {

    int min;

    if (a < b) $$ a < c
        return a;
    else if (b < a) $$ b < c
        return b;
    else return c;
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int result = 0;

    result = my_func(a, b, c);

    cout << result;

    return 0;
}
