#include <iostream>

using namespace std;

void DrawChristmasTree(int h) {
    int blank = 3 * (h / 2) - 1;
    int stars = 1;
    for (int i = 0; i < h; i++) {
        for (int s = 0; s < blank; s++) {
            cout << " ";
        }
        for (int g = 0; g < stars; g++) {
            cout << "*";
        }
        for (int p = 0; p < blank; p++) {
            cout << " ";
        }
        blank -= 1;
        stars += 2;
        cout << "\n";
    }
}

int main()
{
    int height = 0;
    cout << "Insert height of your christmas tree: ";
    cin >> height;
    DrawChristmasTree(height);
}

