/*Task2. The user enters the company's profit for the year (12 months).
Then the user enters a range (for example, 3 and 6 - search between the third and sixth places).
It is necessary to determine the month in which the profit was minimal, taking into account the selected range.*/

#include <iostream>
using namespace std;

int main()
{
    const int numMonths = 12;
    int profits[numMonths];

    // Read in the profits for the year
    int totalProfit = 0;
    for (int i = 0; i < numMonths; i++) {
        cout << "Enter profit for month " << (i + 1) << ": ";
        cin >> profits[i];
        totalProfit += profits[i];
    }

    // Read in the range to search
    int startMonth, endMonth;
    cout << "Enter start month: ";
    cin >> startMonth;
    cout << "Enter end month: ";
    cin >> endMonth;

    // Find the month with the minimum profit in the range
    int minProfit = profits[startMonth - 1];
    int minMonth = startMonth;
    for (int i = startMonth; i <= endMonth; i++) {

        if (profits[i - 1] < minProfit) {

            minProfit = profits[i - 1];
            minMonth = i;
        }
    }
    // Find the month with the maximum profit in the range
    int maxProfit = profits[startMonth - 1];
    int maxMonth = startMonth;
    for (int i = startMonth; i <= endMonth; i++) {

        if (profits[i - 1] > maxProfit) {

            maxProfit = profits[i - 1];
            maxMonth = i;
        }
    }

    // Output the result
    cout << "Minimum profit in range " << startMonth << " to " << endMonth << " occurred in month " << minMonth << " with profit of $" << minProfit << endl;
    cout << "Maximum profit in range " << startMonth << " to " << endMonth << " occurred in month " << maxMonth << " with profit of $" << maxProfit << endl;
}