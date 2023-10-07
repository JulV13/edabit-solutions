#include <iostream>

using namespace std;

// with every incrementation of height, there are +3 cards to the last addition of cards 
// cards  2 -> 7 -> 15 -> 26 -> 40
// height 1 -> 2 ->  3 ->  4 ->  5
//          +5   +8    +11   +14
//             3     3     3
 
int cardsNeeded(int height) {
    int cards = 0;
    int cards_addition = 2;
    for (int i = 0; i < height; i++) {
        cards += cards_addition;
        cards_addition += 3;
    }
    return cards;
}

int main()
{
    int height = 0;
    cout << "Input height of your House of Cards: ";
    cin >> height;
    cout << "Cards needed: " << cardsNeeded(height) << "\n";
}