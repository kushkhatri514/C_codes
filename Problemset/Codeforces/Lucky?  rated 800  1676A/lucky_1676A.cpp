#include <iostream>
using namespace std;

int main(void) {
    int n; // Number of tickets
    cin >> n;

    long ticket;
    
    for (int i = 1; i <= n; i++) {
        int back_sum = 0, front_sum = 0;
        cin >> ticket;
        
        // Last 3 digits sum
        for (int k = 1; k <= 3; k++) {
            back_sum += ticket % 10;
            ticket /= 10;
        }
        
        // First 3 digits sum
        for (int j = 1; j <= 3; j++) {
            front_sum += ticket % 10;
            ticket /= 10;
        }
        
        if (back_sum == front_sum)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
