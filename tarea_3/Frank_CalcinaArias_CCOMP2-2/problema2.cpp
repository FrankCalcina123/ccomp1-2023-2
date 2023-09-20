/*
Implemente un programa que imprima los n números perfectos
*/
#include <iostream>

using namespace std;

int main() 
{
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int numerosPerfectosEncontrados = 0;
    int num = 2; 

    cout << "Los primeros " << n << " números perfectos son:\n";
    while (numerosPerfectosEncontrados < n) 
    {
        int sumaDivisores = 0;
        for (int i = 1; i < num; ++i) 
        {
            if (num % i == 0) 
            {
                sumaDivisores += i;
            }
        }
        if (sumaDivisores == num) 
        {
            cout << num << " ";
            ++numerosPerfectosEncontrados;
        }
        ++num;
    }
    

    return 0;
}
