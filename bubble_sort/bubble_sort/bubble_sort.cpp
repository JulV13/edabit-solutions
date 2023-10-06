#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

void bubble_sort(int array_size, int how_sort) {

    int* sortowanie = new int[array_size];

    int l = 0;

    for (l = 0; l < array_size; l++) {
        sortowanie[l] = 0 + (rand() % 101);
    }

    bool czy_posortowane = false;

    int checker = 0;

    cout << "\nArray before sort: \n\n";

    for (int k = 0; k < array_size; k++) {
        cout << sortowanie[k] << "\n";
    }

    while (czy_posortowane == false) {
        for (int p = 0; p < array_size - 1; p++) {
            if (how_sort == 1) {
                if (sortowanie[p] > sortowanie[p + 1]) {
                    checker++;
                    int lewo = sortowanie[p];
                    int prawo = sortowanie[p + 1];
                    sortowanie[p + 1] = lewo;
                    sortowanie[p] = prawo;
                }
                else {
                    continue;
                }
            }
            else if (how_sort == 2) {
                if (sortowanie[p] < sortowanie[p + 1]) {
                    checker++;
                    int lewo = sortowanie[p];
                    int prawo = sortowanie[p + 1];
                    sortowanie[p] = prawo;
                    sortowanie[p + 1] = lewo;
                }
                else {
                    continue;
                }
            }
            else {

            }
        }
        if (checker == 0) {
            czy_posortowane = true;
            cout << "\nArray has been sorted: \n\n";
            for (int k = 0; k < array_size; k++) {
                cout << sortowanie[k] << "\n";
            }
            break;
        }
        else {
            checker = 0;
        }
    }
}

int main()
{
    cout << "---------------SORTING----------------\n\n";

    int array_size = 0;
    cout << "Insert the size of the array: ";
    cin >> array_size;

    int how_sort = 0;
    while (how_sort != 1 && how_sort != 2) {
        cout << "\nHow to sort? \n";
        cout << "1. Ascending\n";
        cout << "2. Descending\n";
        cout << "Choose: ";
        cin >> how_sort;
    }
    bubble_sort(array_size, how_sort);
}
