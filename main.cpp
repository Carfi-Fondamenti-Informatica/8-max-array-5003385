#include <iostream>
#include "lib.h"

using namespace std;
int main() {

    int n;

    cin >> n;

    float array[n];

    for (int i = 0; i < n; ++i) {

        cin >> array[i];
    }

    float res= max (array, n);
    cout << res << endl;


    return 0;
}
