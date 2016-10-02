#include <iostream>

using namespace std;

int main()
{

    int propNum, propClass;
    double salesPrice, commission, commissionRate;
    const double rateClass1 = .045;
    const double rateClass2 = .05;
    const double rateClass3 = .06;

    cout << "********  Real Estate Commission Calculator  ********\n" << endl;

    cout << "Enter in the Property # that was sold: ";
    cin >> propNum;

    cout << "Enter in the Property's class: ";
    cin >> propClass;

    cout << "Enter the Selling price: ";
    cin >> salesPrice;

    if(propClass == 1)
    {
        commissionRate = rateClass1;
    }

    else if(propClass == 2)
    {
        commissionRate = rateClass2;
    }

    else if(propClass == 3)
    {
        commissionRate = rateClass3;
    }
    else
    {
        cout << "You entered an invalid property class !!!!!!!!!!!!\n**** the following output is INVALID ****\n\n\n";
        salesPrice = 0;
    }

    cout << "\n\nFor Property # " << propNum << ", which is a class " << propClass << " property, the" << endl;
    cout << "agent earned a commision of $" << commissionRate * salesPrice << " which is " << commissionRate * 100 << "% of " << salesPrice << endl;

    return 0;
}
