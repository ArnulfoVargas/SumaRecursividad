// SumaRecursividad.cpp : Vargas Mejia Arnulfo
// Este programa sumara 2 valores con recursividad
//

#include <iostream>

int Add(int value1, int value2);

int main()
{
    int val1 = 0,val2 = 0;

    std::cout << "Ingresa un valor que quieras sumar\n";
    std::cin >> val1;

    std::cout << "Ingresa el valor a sumar\n";
    std::cin >> val2;

    system("CLS");

    std::cout << "El resultado es: " << Add(val1, val2)<< std::endl;
}

int Add(int value1, int value2) {
    if (value2 > 0){
        value1++;
        value2--;

        Add(value1, value2);
    }
    else {
        return value1;
    }
}