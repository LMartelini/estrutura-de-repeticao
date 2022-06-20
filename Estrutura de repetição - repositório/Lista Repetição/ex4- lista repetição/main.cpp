#include <iostream>

using namespace std;

int main()
{
    int n, aux;

    cout << "N: ";
    cin >> n;
    aux = 1;

    while (aux*(aux+1) * (aux+2) < n) {
        aux++;
    }

    if (aux*(aux+1)*(aux+2) == n) {
        cout << n << " TRIANGULAR" << endl;
    }
    else{
        cout << n << " NAO TRIANGULAR " << endl;
    }
}
