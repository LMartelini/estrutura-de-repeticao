#include <iostream>

using namespace std;

int main()
{
    int n, tn, tn1, tn2;
    cout << "N: ";
    cin >> n;

    while (n<2) {
        cout << " N>=2 ";
        cin >> n;
    }

    tn1 = 1;
    tn2 = 1;

    cout << " Sequencia fib: " << tn1 << ", " << tn2;
    for (int i=3; i<=n; i++) {
        tn = tn1 + tn2;
        cout << ", " << tn;
        tn2 = tn1;
        tn1 = tn;
    }
    cout << endl;
}
