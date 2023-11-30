#include<iostream>
using namespace std;

void function1(int a, int b)
{
    // cin >> a >> b; // This line is unnecessary since you are passing 'a' and 'b' as parameters
    cout << a << " " << b << endl; // Print the values of 'a' and 'b'
}

int main()
{
    int a, b; // Declare 'a' and 'b' variables
    cin >> a >> b; // Take input for 'a' and 'b'
    function1(a, b); // Call the function with 'a' and 'b'
    return 0;
}

