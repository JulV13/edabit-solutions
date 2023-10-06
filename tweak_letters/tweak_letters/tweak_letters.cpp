#include <iostream>

using namespace std;

void tweak_letters(string word, string alphabet) {
    int* tweak_array = new int[word.size()];

    for (int i = 0; i < word.size(); i++) {
        cout << "Insert a tweak for the " << i + 1 << ". letter in your word: ";
        cin >> tweak_array[i];
    }

    cout << "Your word: " << word << "\n";
    cout << "Your tweak inputs: [";

    for (int i = 0; i < word.size(); i++) {
        if (i == word.size() - 1) {
            cout << tweak_array[i];
        }
        else {
            cout << tweak_array[i] << ",";
        }
    }
    cout << "]\n";

    for (int k = 0; k < word.size(); k++) {
        for (int p = 0; p < alphabet.size(); p++) {
            if (word[k] == alphabet[p]) {
                cout << "Tweaking letter " << "'" << word[k] << "'" << " to " << "'" << alphabet[p + tweak_array[k]] << "'" << "\n";
                word[k] = alphabet[p + tweak_array[k]];
                break;
            }
        }
    }

    cout << "Tweaked word: " << word << "\n";
}

int main()
{
    string word = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    cout << "Insert a word: ";
    cin >> word;
    
    tweak_letters(word, alphabet);
}
