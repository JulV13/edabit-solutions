#include <iostream>

using namespace std;

void multiplicationTable(int n) {
    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < n+1; j++) {
            if (j == n) {
                cout << i * j;
            }
            else {
                cout << i * j << ", ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int n = 0;
    cout << "Insert a N parameter: ";
    cin >> n;
    cout << "\n";
    multiplicationTable(n);
}

