#include <iostream>

using namespace std;

void makeBox(int n) {
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1) {
                cout << "#";
            }
            else if (j == 0 || j == n-1){
                cout << "#";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int n = 0;
    int m = 0;
    cout << "Insert 'n' for a box: ";
    cin >> n;
    m = n;
    makeBox(n);
}

