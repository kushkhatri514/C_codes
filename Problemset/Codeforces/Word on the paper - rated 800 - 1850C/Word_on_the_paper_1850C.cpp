#include <iostream>
using namespace std;

int main(void) {
    int n;      // number of 8×8 grids
    char a;     // to store each character
    cin >> n;

    for (int i = 0; i < n; i++) {       // loop over grids
        for (int j = 0; j < 8; j++) {   // loop over rows
            for (int k = 0; k < 8; k++) { // loop over columns
                cin >> a;
                if (a != '.')           // print if not a dot
                    cout << a;
            }
        }
        cout << "\n"; // separate outputs for each grid
    }

    return 0;
}
