#include <iostream>

using namespace std;

int main()
{
    double n1, n2;
    char op;

    cout << "Enter 1st number: ";

    cin >> n1;

    cout << "Enter an operator (+, -, *, /): ";

    cin >> op;

    cout << "Enter 2nd number: ";

    cin >> n2;

    switch (op)
    {
    case '+':
        cout << "Result = " << n1 + n2 << endl;
        break;

    case '-':
        cout << "Result = " << n1 - n2 << endl;
        break;

    case '*':
        cout << "Result = " << n1 * n2 << endl;
        break;

    case '/':
        if (n2 != 0)
        {
            cout << "Result = " << n1 / n2 << endl;
        }
        else
        {
            cout << "ERROR: Division by zero is not allowed." << endl;
        }
        break;

    default:
        cout << "0" << endl;
        break;
    }
    return 0;
}
