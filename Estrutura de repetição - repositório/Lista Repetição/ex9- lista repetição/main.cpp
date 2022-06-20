#include <iostream>

using namespace std;

int main()
{
    int N, soma;

    cout << " Digite N: " << endl;
    cin >> N;
    soma = 0;

    for (int i=1; i<=N; i++) {
        cout << i << endl;
        soma = soma + i;
    }

    cout << " A soma dos numeros sera: " << soma << endl;
}
