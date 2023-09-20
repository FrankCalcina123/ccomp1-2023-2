/*
Implemente un programa que imprima solicite por teclado un numero n e imprima los n primeros primos.
Si ingresa 20
Debe imprimir: 2 3 5 7 11 13 17 19
Un numero es primo si es divisible únicamente entre 1 y el mismo numero.
*/

#include <iostream>

using namespace std;

int main()
{
  int n;
  int contador = 2; 

  cout << "Ingrese un número: ";
  cin >> n;
  cout << "Los primeros " << n << " números primos son:" << endl;

  while (n > 0)
  {
    bool es_primo = true;

    for (int i = 2; i <= contador / 2; ++i)
    {
      if (contador % i == 0)
      {
        es_primo = false;
        break;
      }
    }

    if (es_primo)
    {
      cout << contador << " ";
      --n;
    }

    ++contador;
  }

  cout << endl;

  return 0;
}
