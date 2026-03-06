#include <iostream>
using namespace std;

int contarPrimosAteN(int N)
{
    int p_count = 0;
    for (int i = 2; i <= N; i++)
    {
        int d_count = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                d_count++;

        if (d_count == 2)
            p_count++;
    }
    return p_count;
}

int main()
{
    int testesPassados = 0;
    cout << "Teste 1: O resultado esperado é 4 e o valor retornado foi "
         << contarPrimosAteN(10) << endl;
    if (contarPrimosAteN(10) == 4)
        testesPassados++;
    cout << "Teste 2: O resultado esperado é 8 e o valor retornado foi "
         << contarPrimosAteN(20) << endl;
    if (contarPrimosAteN(20) == 8)
        testesPassados++;
    cout << "Teste 3: O resultado esperado é 3 e o valor retornado foi "
         << contarPrimosAteN(5) << endl;
    if (contarPrimosAteN(5) == 3)
        testesPassados++;
    cout << "Teste 4: O resultado esperado é 0 e o valor retornado foi "
         << contarPrimosAteN(1) << endl;
    if (contarPrimosAteN(1) == 0)
        testesPassados++;
    cout << "Teste 5: O resultado esperado é 25 e o valor retornado foi "
         << contarPrimosAteN(100) << endl;
    if (contarPrimosAteN(100) == 25)
        testesPassados++;
    cout << "Sua implementação passou em " << testesPassados << " de 5 testes." << endl;
    return 0;
}
