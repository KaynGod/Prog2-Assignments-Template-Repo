//ahmed mohamed saied
//20216709
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;

    // read input values
    cin >> a >> b >> c;

    // print values in ascending order
    int arr[3] = {a, b, c};
    sort(arr, arr+3);
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << endl;

    // print original sequence
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
