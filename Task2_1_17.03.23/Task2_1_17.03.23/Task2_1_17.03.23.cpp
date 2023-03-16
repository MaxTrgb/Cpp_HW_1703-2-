/*Task1. In a one-dimensional array filled with random numbers, determine the minimum and maximum elements.*/

#include <iostream>
using namespace std;

int main()
{
    // Main loop    
    while (true) {

        const int SIZE = 10; // Size of array
        int arr[SIZE]; // Array of random numbers
        int min_val = INT_MAX, max_val = INT_MIN; // Initialize min and max values

        // Fill array with random numbers
        for (int i = 0; i < SIZE; i++) {

            arr[i] = rand(); // rand() generates a random number
        }

        // Iterate over array and update min and max values
        for (int i = 0; i < SIZE; i++) {

            if (arr[i] < min_val) {

                min_val = arr[i];
            }
            if (arr[i] > max_val) {

                max_val = arr[i];
            }
        }

        // Display the minimum and maximum values
        cout << "\nMinimum value: " << min_val << endl;
        cout << "Maximum value: " << max_val << endl;

        // Ask user if they want to see another result
        int choice;
        cout << "\nEnter 1 to see another result, 0 to exit: ";
        cin >> choice;

        // Exit loop
        if (choice == 0) {

            break; 

        }
    }
}