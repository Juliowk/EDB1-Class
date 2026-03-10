#include <iostream>
using namespace std;
int elementoMaisFrequente(int arr[], int tamanho)
{
    int greaterNumberOfTimes;
    int mostFrequentNumber;

    for (int i = 0; i < tamanho; i++)
    {
        int now = arr[i];
        int count = 0;

        for (int j = 0; j < tamanho; j++)
        {
            if (now == arr[j])
                count++;
        }

        if (i == 0)
        {
            greaterNumberOfTimes = count;
            mostFrequentNumber = arr[i];
        }
        else if (count > greaterNumberOfTimes)
        {
            greaterNumberOfTimes = count;
            mostFrequentNumber = arr[i];
        }
    }

    return mostFrequentNumber;
}
int main()
{
    int testesPassados = 0;
    int arr1[] = {3, 1, 2, 2, 3, 3}; // Não ordenado
    cout << "Teste 1: O resultado esperado é 3 e o valor retornado foi "
         << elementoMaisFrequente(arr1, 6) << endl;
    if (elementoMaisFrequente(arr1, 6) == 3)
        testesPassados++;
    int arr2[] = {5, 4, 4, 5, 5, 4}; // Não ordenado
    cout << "Teste 2: O resultado esperado é 4 ou 5 e o valor retornado foi " << elementoMaisFrequente(arr2, 6) << endl;
    if (elementoMaisFrequente(arr2, 6) == 4 || elementoMaisFrequente(arr2, 6) == 5)
        testesPassados++;
    int arr3[] = {0, 1, 0, 0, 1, 1, 1}; // Não ordenado
    cout << "Teste 3: O resultado esperado é 1 e o valor retornado foi "
         << elementoMaisFrequente(arr3, 7) << endl;
    if (elementoMaisFrequente(arr3, 7) == 1)
        testesPassados++;
    int arr4[] = {1, 2, 3, 4, 5}; // Todos elementos únicos
    cout << "Teste 4: O resultado esperado é qualquer elemento (pois todos têm a mesma frequência) e o valor retornado foi " << elementoMaisFrequente(arr4, 5) << endl;
    if (elementoMaisFrequente(arr4, 5) >= 1 && elementoMaisFrequente(arr4, 5) <= 5)
        testesPassados++;
    int arr5[] = {7, 8, 7, 8, 7, 8, 8}; // Não ordenado
    cout << "Teste 5: O resultado esperado é 8 e o valor retornado foi "
         << elementoMaisFrequente(arr5, 7) << endl;
    if (elementoMaisFrequente(arr5, 7) == 8)
        testesPassados++;
    cout << "Sua implementação passou em " << testesPassados << " de 5 testes." << endl;
    return 0;
}