#include <iostream>
#include "Gift.h"
#include "Gift.h" // Intentional
#include "Gift.cpp"
using namespace std;
using namespace sdds;

int main() {
    int numberOfGifts = 0; // Initial number of Gifts

    // TODO 1: declare a pointer for a dynamic array of Gifts (remember to initialize it)
    int* Gifts = NULL;
    // END TODO 1

    cout << "Enter number of Gifts to allocate: ";
    cin >> numberOfGifts;
    if (numberOfGifts < 1) return 1;

    // TODO 2: allocate dynamic memory for the gifts pointer using the numberOfGifts
    Gifts = new int[numberOfGifts];
    // END TODO 2

    for (int i = 0; i < numberOfGifts; ++i) {
        cout << "Gift #" << i + 1 << ": " << endl;
        // TODO 3: utilizing the gifting functions, allow input for the gift's description
        gifting(char*);
        // END TODO 3
        cin.ignore(2000, '\n'); // clear input buffer
        // TODO 4: utilizing the gifting functions, allow the user to input the gift's price
        gifting(double&);
        // END TODO 4
        cin.ignore(2000, '\n'); // clear input buffer
        // TODO 5: utilizing the gifting functions, allow the user to input the units of gift
        gifting(int&);
        // END TODO 5
        cin.ignore(2000, '\n');
        cout << endl;
    }

    // TODO 6: display the details of each gift using the Gifts module display function
    display(const Gift&);
    // END TODO 6

    // TODO 7: deallocate the gifts pointer here to avoid memory as we are done with it
    delete[] Gifts;
    // END TODO 7

    return 0;
}
