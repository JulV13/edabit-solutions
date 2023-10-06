#include <iostream>

using namespace std;

void reverse_string(string str) {
    string* reversed = new string[str.size()];
    int k = 0;

    for (int i = str.size() - 1; i > -1; i--) {
        reversed[k] = str[i];
        k++;
    }

    cout << "Reversed string: ";
    for (int p = 0; p < str.size(); p++) {
        cout << reversed[p];
    }

    cout << "\n\n";
}

int main()
{
    string str;
    cout << "Input string: ";
    cin >> str;
    reverse_string(str);
}


