#include <iostream>
using namespace std;

int main(void) {
    int n, m;           // Dimensions of the image
    int colorcount = 0; // Count of colored pixels
    char color;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> color;
            // Count if pixel is a colored one
            if (color == 'C' || color == 'Y' || color == 'M') {
                colorcount++;
            }
        }
    }

    // Output based on whether any colored pixel was found
    if (colorcount == 0)
        cout << "#Black&White";
    else
        cout << "#Color";

    return 0;
}
