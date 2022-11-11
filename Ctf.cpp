#ifdef __MSDOS__
#include <iostream.h>
#include <stdlib.h>
#else
#include <iostream>
#include <cstdlib>
using namespace std;
#endif

int main (void)
{
    int opcion;
    float resultado, temperatura;
    cout << "Ingresa el valor de temperatura: ";
    cin >> temperatura;
    cin.get();
    cout << "Selecciona el valor de opcion." << endl;
    cout << "\t1.- Fahrenheit a Celsius" << endl;
    cout << "\t2.- Celsius a Fahrenheit" << endl;
    cout << "\t: ";
    do {
        cin >> opcion;
        cin.get();
        if (opcion<1||opcion>2)
        {
            cout << "Valor incorrecto. Ingr\202salo nuevamente.: ";
        }
    } while (opcion<1||opcion>2);
    if(opcion==1)
        resultado=(temperatura-32)/1.8;
    else
        resultado=1.8*temperatura+32;
    cout << "Valor de resultado: " << resultado << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
