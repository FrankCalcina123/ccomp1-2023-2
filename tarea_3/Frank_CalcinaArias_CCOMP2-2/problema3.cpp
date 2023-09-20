/*
Implemente un programa que imprima los n números de la secuencia de Fibonacci
1 1 2 3 5 8 13 21 .....

*/

#include <iostream>

using namespace std;

int main ()
{
  int a{0};
  int b{1};
  int c=a+b;
  int numero;

  cout << "Ingrese un número: " << endl;
  cin >> numero;

  while (c < numero)
    {
      cout << c << endl;
      a=b;
      b=c;
      c=a+b;
    }
  return 0;
}
