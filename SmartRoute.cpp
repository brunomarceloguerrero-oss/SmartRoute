
#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;
int main()
{
    const int CANTIDAD = 5;

    double distancia[CANTIDAD];
    double suma = 0;
    double promedio;
    double menor;

    int destinoMenor = 0;

    double mayor;
    int destinoMayor = 0;

    for (int i = 0; i < CANTIDAD; i++)
    {

        cout << "ingrese la distancia del destino " << i + 1 << ": "; cin >> distancia[i];

        while (distancia[i] <= 0)

        {
            cout << "ingrese la distancia del destino " << i + 1 << ": "; cin >> distancia[i];
        }
    }
    cout << endl;
    for (int i = 0; i < CANTIDAD; i++)
    {
        cout << "Destino " << i + 1 << ": "
            << distancia[i] << " km" << endl;
    }


    for (int i = 0; i < CANTIDAD; i++)
    {
        suma += distancia[i];
    }
    promedio = suma / CANTIDAD;

    cout << "\nDistancia total a recorrer: " << suma << " km" << endl;
    cout << "\nDistancia promedio: " << promedio << " km" << endl;

    menor = distancia[0];

    for (int i = 1; i < CANTIDAD; i++)
    {
        if (distancia[i] < menor)
        {
            menor = distancia[i];
            destinoMenor = i;
        }



    }
    cout << "La menor distancia es de: " << menor << " km" << endl;
    cout << "El destino mas cercano es el destino " << destinoMenor + 1 << " con " << menor << " km" << endl;

    mayor = distancia[0];

    for (int i = 1; i < CANTIDAD; i++)
    {
        if (distancia[i] > mayor)
        {
            mayor = distancia[i];
            destinoMayor = i;
        }



    }
    cout << "La mayor distancia es de: " << mayor << " km" << endl;
    cout << "El destino mas lejano es el destino " << destinoMayor + 1 << " con " << mayor << " km" << endl;

    return 0;
}
