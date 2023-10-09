#include <iostream>
#include <string>

using namespace std;

void reverseCoding(string text) {
    for (int i = 0; i < text.size(); i+=2) {
        char letter = text[i];
        string helper(1, text[i + 1]);
        int test = stoi(helper);
        for (int j = 0; j < test; j++) {
            cout << letter;
        }
    }
}

int main()
{
    string text = "";
    cout << "Input text: ";
    cin >> text;
    cout << "Output: ";
    reverseCoding(text);
}