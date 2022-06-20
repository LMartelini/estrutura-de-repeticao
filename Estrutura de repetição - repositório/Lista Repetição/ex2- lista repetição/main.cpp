#include <iostream>

using namespace std;

int main()
{
    float ciclano, fulano;
    int x;

    x = 1;
    fulano = 150;
    ciclano = 110;

    while (ciclano<fulano) {

    fulano = fulano + 2;
    ciclano = ciclano + 3;
    x++;

    }

    cout << " Serao necessarios " << x << " anos " << endl;
}
