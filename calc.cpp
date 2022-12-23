#include <iostream>
using namespace std;

int main()
{
    char op;
    float res = 0,choice;
    float num1, num2;
    cout << "\nEnter operator to perform the operation: +, -, *, / : ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch (op)
    {
    case '+':
        res = num1 + num2;
        cout << num1 << " + " << num2 << " = " << res;
        break;

    case '-':
        res = num1 - num2;
        cout << num1 << " - " << num2 << " = " << res;
        break;

    case '*':
        res = num1 * num2;
        cout << num1 << " * " << num2 << " = " << res;
        break;

    case '/':
        res = num1 / num2;
        cout << num1 << " / " << num2 << " = " << res;
        break;

    default:
        cout << "\nPlease enter a valid operator!";
        break;
    }
    while (1)
    {
        cout << "\nDo you want to continue? \n0.NO\n1.YES\n";
        cin >> choice;
        if (choice)
        {

            cout << "\nEnter operator to perform the operation: +, -, *, / : ";
            cin >> op;
            cout << "\nEnter one operand: ";
            cin >> num1;
            switch (op)
            {
            case '+':
                res += num1;
                cout << num1 << " + " << num2 << " = " << res;
                break;

            case '-':
                res -= num1;
                cout << num1 << " - " << num2 << " = " << res;
                break;

            case '*':
                res *= num1;
                cout << num1 << " * " << num2 << " = " << res;
                break;

            case '/':
                res /= num1;
                cout << num1 << " / " << num2 << " = " << res;
                break;

            default:
                cout << "\nPlease enter a valid operator!";
                break;
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}
