#include <iostream>
#include "exception.h"
#include "divide.h"
#include "index.h"
using namespace std;

int main()
{
    setlocale(0, "ru");

    int numerator = 0;
    int denominator = 0;

    try
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        if (denominator == 0) {
            throw Divide("We cant do this!");
        }
    
        cout << "Result = " << numerator / denominator << endl;

        int mas[3]{ 1, 2, 3 };

        for (int i = 0; i < 5; i++)
        {
            if (i <= 3) {
                throw Index("undefine Index");
            }
            cout << mas[i] << endl;
        }
    }
    catch (Divide exception)
    {
        cout << exception.GetMessage() << endl;
    }
    catch (Index exception)
    {
        cout << exception.GetMessage() << endl;
    }

    return 0;
}