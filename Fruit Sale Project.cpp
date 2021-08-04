#include <iostream>

using namespace std;
const double strawberries = 3.99;
const double blueberries = 2.99;
const double raspberries = 3.49;
double projectedincrease;
double strawberrysales;
double blueberrysales;
double raspberrysales;
double totalstrawincrease;
double totalblueincrease;
double totalraspincrease;
double totalprojsales;
char order_berries;

int main()
{
    cout << "Please enter the total for strawberry sales this year" << endl;
    cin >> projectedincrease;

    cout << "Please enter the total for blueberry sales this year" << endl;
    cin >> projectedincrease;

    cout << "Please enter the total for raspberry sales this year" << endl;
    cin >> projectedincrease;

        totalstrawincrease = (projectedincrease * strawberrysales) + strawberrysales;
        totalblueincrease = (projectedincrease * blueberrysales) + blueberrysales;
        totalraspincrease = (projectedincrease * raspberrysales) + raspberrysales;


    cout << "Your increase in strawberry sales for next year is:  $" << totalstrawincrease << endl;
    cout << "Your increase in blueberry sales for the next year is $" << totalblueincrease << endl;
    cout << "Your increase in raspberry sales for the next year is $" << totalraspincrease << endl;
    cout << "Your total potential increase is sales for next year is $" << totalprojsales << endl;
    return 0;
}
