#include<bits/stdc++.h>
using namespace std;

void revcheck();

int main() {
    revcheck();
    return 0;
}

void revcheck() {
    int n1, n2;
    cin >> n1 >> n2;
    
    for (int num = n1; num <= n2; num++) {
        int arr[10] = {0};
        int temp = num;

        while (temp > 0) {
            int rem = temp % 10;
            temp = temp / 10;
            arr[rem] = arr[rem] + 1;
        }

        int count = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[j] > 1) {
                count = count + 1;
            }
        }

        if (count == 0) {
            cout << num << endl;// Output non-repeating digit numbers
        }
    }
}
