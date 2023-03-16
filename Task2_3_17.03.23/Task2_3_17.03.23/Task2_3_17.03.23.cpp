/*Task3. In a one-dimensional array consisting of N real numbers, calculate:
- the sum of negative elements
- the product of the elements located between the min and max elements
- the product of elements with even numbers
- the sum of elements located between the first and last negative elements*/

#include <iostream>

using namespace std;

int main() {
    const int N = 10; // Size of the array
    double arr[N]; // Array of N real numbers

    // Input the elements of the array
    cout << "Enter " << N << " real numbers: ";
    for (int i = 0; i < N; i++) {

        cin >> arr[i];
    }

    // Calculate the sum of negative elements
    double sum_neg = 0;
    for (int i = 0; i < N; i++) {

        if (arr[i] < 0) {

            sum_neg += arr[i];
        }
    }
    cout << "Sum of negative elements: " << sum_neg << endl;

    // Find the index of the minimum and maximum elements
    int min_index = 0;
    int max_index = 0;
    for (int i = 1; i < N; i++) {

        if (arr[i] < arr[min_index]) {

            min_index = i;
        }
        if (arr[i] > arr[max_index]) {

            max_index = i;
        }
    }

    // Calculate the product of the elements between the min and max elements
    long double prod_between = 1;
    int start_index = min_index < max_index ? min_index : max_index; // The ? is the ternary operator, which is a shorthand way of writing an if-else statement
    int end_index = min_index > max_index ? min_index : max_index;

    for (int i = start_index + 1; i < end_index; i++) {

        prod_between *= arr[i];
    }
    cout << "Product of elements between min and max: " << prod_between << endl;

    // Calculate the product of elements with even indices
    long double prod_even = 1;
    for (int i = 0; i < N; i += 2) {

        prod_even *= arr[i];
    }
    cout << "Product of elements with even indices: " << prod_even << endl;

    // Calculate the sum of elements between the first and last negative elements
    long double sum_between_neg = 0;
    int first_neg_index = -1;
    int last_neg_index = -1;

    for (int i = 0; i < N; i++) {

        if (arr[i] < 0) {

            if (first_neg_index == -1) {

                first_neg_index = i;
            }
            last_neg_index = i;
        }
    }
    if (first_neg_index != -1 && last_neg_index != -1) {

        for (int i = first_neg_index + 1; i < last_neg_index; i++) {

            sum_between_neg += arr[i];
        }
    }
    cout << "Sum of elements between first and last negative: " << sum_between_neg << endl;

}