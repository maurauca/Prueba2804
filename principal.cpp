/*Una tienda desea llevar el control de venta de recargas Tigo y Claro, por tal razón se le
contrata a usted para crear un programa que les ayude con los siguientes ítems:
1. Registrar las ventas de recarga.
2. Mostrar el total de venta de recarga
3. Mostar detallado total de venta de recarga Tigo y Claro.
Nota: Si una recarga es mayor a C$ 500 la aplicación debe de dar un descuento del 3%*/

#include <iostream>
#include <math.h>
#include "funciones.cpp"

using namespace std;

int main()
{
    float total = 0, totalTigo = 0, totalClaro = 0;
    int op;

    do
    {
        cout << "=================Menu===============" << endl;
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Registrar ventas de recarga" << endl;
        cout << "2. Mostrar el total de las ventas de recarga" << endl;
        cout << "3. Mostrar el detalle de las ventas de recarga segun el operador" << endl;
        cout << "4. Salir" << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            registrarVentas(total, totalTigo, totalClaro);
            break;
        case 2:
            mostrarTotal(total);
            break;
        case 3:
            mostrarDetalle(totalTigo, totalClaro);
            break;
        case 4:
            cout << "Gracias por utilizar el programa" << endl;
            break;
        default:
            cout << "Opcion invalida. Digite una opcion valida para continuar." << endl;
        }
    } while (op != 4);

    return 0;
}