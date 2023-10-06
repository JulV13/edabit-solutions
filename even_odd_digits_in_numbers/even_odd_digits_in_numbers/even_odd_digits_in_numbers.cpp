#include <iostream>
#include <string> 

using namespace std;

void countDigits(int *numbers, int size, string odd_or_even) {
    
    int even = 0;
    int odd = 0;

    int* odd_even_array = new int[size];

    for (int i = 0; i < size; i++) {
        string str = to_string(numbers[i]);
        for (int k = 0; k < str.size(); k++) {
            if (odd_or_even == "odd") {
                if (str[k] % 2 == 1) {
                    // if odd
                    odd++;
                }
            }
            if (odd_or_even == "even") {
                if (str[k] % 2 == 0) {
                    // if even
                    even++;
                }
            }
        }
        if (odd_or_even == "even") {
            odd_even_array[i] = even;
        }
        if (odd_or_even == "odd") {
            odd_even_array[i] = odd;
        }
        even = 0;
        odd = 0;
    }

    cout << "Number of odd or even digits: \n";
    cout << "[";
    for (int k = 0; k < size; k++) {
        if (k < size - 1) {
            cout << numbers[k] << ", ";
        }
        else {
            cout << numbers[k] << "] ---> ";
        }
    }
    cout << "[";
    for (int i = 0; i < size; i++) {
        if (i < size - 1) {
            cout << odd_even_array[i] << ", ";
        }
        else {
            cout << odd_even_array[i] << "]";
        }
    }
}

int main()
{
    int size = 0;
    cout << "Insert array size: ";
    cin >> size;
    int *numbers = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Insert a " << i << ". number to an array: ";
        cin >> numbers[i];
    }
    string odd_or_even = "";
    while (odd_or_even != "odd" && odd_or_even != "even") {
        cout << "What to count? Odd or even digits: ";
        cin >> odd_or_even;
    }
    

    countDigits(numbers, size, odd_or_even);
}


