//  C++ Calculator — *OOP-Based Calculator*

// What you learn:** classes, methods, encapsulation

#include <iostream>
using namespace std;

class Calculator
{
public:
    double add(double a, double b) { return a + b; }
    double sub(double a, double b) { return a - b; }
    double mul(double a, double b) { return a * b; }
    double div(double a, double b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return a / b;
    }
};

int main()
{
    Calculator calc;
    int choice;
    double x, y;

    cout << "--- C++ OOP Calculator ---" << endl;
    cout << " 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    switch (choice)
    {
    case 1:
        cout << calc.add(x, y);
        break;
    case 2:
        cout << calc.sub(x, y);
        break;
    case 3:
        cout << calc.mul(x, y);
        break;
    case 4:
        cout << calc.div(x, y);
        break;
    default:
        cout << "Invalid choice";
    }
    return 0;
}
