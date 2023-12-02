#include <iostream>
using namespace std;

// Function to find the sum of elements in an integer array
int sum(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += arr[i];
    }
    return result;
}

// Function to find the sum of elements in a double array
double sum(double arr[], int size) {
    double result = 0.0;
    for (int i = 0; i < size; ++i) {
        result += arr[i];
    }
    return result;
}

int main() {
    const int size = 5;
    int intArray[size];
    double doubleArray[size];

    // Taking user input for the integer array
    cout << "Enter " << size << " integers for intArray:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> intArray[i];
    }

    // Taking user input for the double array
    cout << "Enter " << size << " doubles for doubleArray:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> doubleArray[i];
    }

    // Call the overloaded functions with user input arrays
    int intSum = sum(intArray, size);
    double doubleSum = sum(doubleArray, size);

    cout << "Sum of intArray: " << intSum << endl;
    cout << "Sum of doubleArray: " << doubleSum << endl;

    return 0;
}
