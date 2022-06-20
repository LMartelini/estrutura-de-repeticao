#include <iostream>

using namespace std;

int main()
{
    int soma;
    soma = 0;

    for (int i=1; i<=500; i++ ){
       cout << i << endl;
       soma = soma + i;
       i = i + 2;
    }

    cout << " A soma de todos os numeros eh: " << soma << endl;
}
