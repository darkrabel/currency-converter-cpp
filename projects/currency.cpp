
#include <iostream>
using namespace std;
class euro
{
protected:
    float euroValue = 100.59;
    float convertFromEuroBdt;
    float amountOfBdt;

public:
    // euro(){}
    euro()
    {

        cout << "how much euro  you want to convrt" << endl;
        cin >> amountOfBdt;
        convertFromEuroBdt = euroValue * amountOfBdt;
        cout << convertFromEuroBdt << endl
             << "thankyou using our converter." << endl;
    }
};
class dollar
{
    float dollarValue = 84.81;
    float convertFromDollarBdt;
    float amountOfBdt;

public:
    dollar()
    {
        cout << "how mch dollar you want to conver" << endl;
        cin >> amountOfBdt;
        convertFromDollarBdt = dollarValue * amountOfBdt;
        cout << "the amount is " << endl
             << convertFromDollarBdt << endl
             << "thankyou using our converter" << endl;
    }
};
class turkish_era
{
    float turkeyEraValue = 84.81;
    float convertturkeyBdt;
    float amountOfBdt;

public:
    turkish_era()
    {
        cout << "how much turkish era  you want to convert" << endl;
        cin >> amountOfBdt;
        float convertturkeyBdt = amountOfBdt * turkeyEraValue;
        cout << "the amount is " << endl
             << turkeyEraValue << endl
             << "thankyou using our converter" << endl;
    }
};

int main()

{

    cout << "what option do you want to use " << endl;
    cout << "3.Turkish ira to bdt" << endl;
    cout << "1.dollar to bdt" << endl;
    cout << "2.euro  to bdt" << endl;
    int option;
    cout << "exmaple - 1" << endl;
    cin >> option;

    if (option == 1)
    {
        dollar run;
    }

    if (option == 2)
    {
        euro run;
    }

    if (option == 3)
    {
        turkish_era run;
    }

    return 0;
}
