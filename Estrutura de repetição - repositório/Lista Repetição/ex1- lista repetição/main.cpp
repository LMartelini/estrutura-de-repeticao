#include <iostream>

using namespace std;

int main()
{
    float x, S, total;

    cout << " Digite x: " << endl;
    cin >> x;
    cout << "-----------------------------------" << endl;

    S = 0;

    for (int i=1; i<=20; i++) {
        S = (x/i) + S;
        cout << S << endl;
        total = total + S;

    }

    cout << " A soma sera: " << total << endl;
}
