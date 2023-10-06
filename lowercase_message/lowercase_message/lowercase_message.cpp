#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{

    cout << "---------------LOWERCASE MESSAGE----------------\n\n";

    // example input: SkITToHFDtLOSASeVOOSKSk

    string message = "";
    cout << "Insert the message: ";
    cin >> message;

    int size = 0;
    int k = 0;

    for (int i = 0; i < message.size(); i++) {
        if (islower(message[i])) {
            size++;
        }
    }

    string* decoded = new string[size];

    for (int i = 0; i < message.size(); i++) {
        if (islower(message[i])) {
            decoded[k] = message[i];
            k++;
        }
    }

    cout << "Decoded message: ";

    for (int l = 0; l < size; l++) {
        cout << decoded[l];
    }
    cout << "\n";
}