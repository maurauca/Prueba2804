/*Una tienda desea llevar el control de venta de recargas Tigo y Claro, por tal razón se le
contrata a usted para crear un programa que les ayude con los siguientes ítems:
1. Registrar las ventas de recarga.
2. Mostrar el total de venta de recarga
3. Mostar detallado total de venta de recarga Tigo y Claro.
Nota: Si una recarga es mayor a C$ 500 la aplicación debe de dar un descuento del 3%
Maura Quintanilla*/

#include <iostream>
#include <math.h>
using namespace std;

void registrarVentas(float &total, float &totalTigo, float &totalClaro);
void mostrarTotal(float total);
void mostrarDetalle(float totalTigo, float totalClaro);

void registrarVentas(float &total, float &totalTigo, float &totalClaro)
{
    float monto;
    string operador;
    cout << "Ingrese el monto de la recarga: ";
    cin >> monto;

    while (true)
    {
        cout << "Ingrese el operador de la recarga (Tigo/Claro) (cuide sus mayusculas): ";
        cin >> operador;
        if (operador == "Tigo" || operador == "Claro")
        {
            break;
        }
        else
        {
            cout << "Operador invalido. Intente de nuevo." << endl;
        }
    }
    if (monto > 500)
    {
        monto *= 0.97;
    }

    total += monto;
    if (operador == "Tigo")
    {
        totalTigo += monto;
    }
    else
    {
        totalClaro += monto;
    }
    cout << "Su venta fue registrada exitosamente." << endl;
}

void mostrarTotal(float total)
{
    cout << "El total de venta de recarga es: C$ " << total << endl;
}

void mostrarDetalle(float totalTigo, float totalClaro)
{
    cout << "Detalle de venta de recarga:" << endl;
    cout << "Tigo: C$ " << totalTigo << endl;
    cout << "Claro: C$ " << totalClaro << endl;
}
