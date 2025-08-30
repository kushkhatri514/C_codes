#include <iostream>
using namespace std;

int main(void) {
    int n; 
    long long cost = 0;
    int zerocount = 0;       // count of zero elements
    int negetivecount = 0;   // count of negative elements
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x > 0) {
            cost = cost + x - 1; // reduce positive numbers to 1
        }
        else if (x < 0) {
            cost = cost - x - 1; // increase negative numbers to -1
            
            negetivecount++;
        }
        else {
            cost = cost + 1; // convert 0 to 1
            zerocount++;
        }
    }

    // If odd count of negatives and no zero to fix it, convert one -1 to 1
    if (negetivecount % 2 == 1) {
        if (zerocount == 0) {
            cost += 2;
        }
    }

    cout << cost << endl;
    return 0;
}
