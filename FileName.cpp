// Лабораторна робота № 4.1
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k, N, j;
    double P;

    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;

    // 1. Цикл з умовами на початку (while)
    P = 1;
    j = k;
    while (j <= N)
    {
        P *= sqrt((j * j) / (1 + exp(-1.0 * j)));
        j++;
    }
    cout << P << endl;

    // 2. Цикл з умовами в кінці (do-while)
    P = 1;
    j = k;
    do {
        P *= sqrt((j * j) / (1 + exp(-1.0 * j)));
        j++;
    } while (j <= N);
    cout << P << endl;

    // 3. Цикл з параметром (for на збільшення)
    P = 1;
    for (j = k; j <= N; j++)
    {
        P *= sqrt(( j * j) / (1 + exp(-1.0 * j)));
    }
    cout << P << endl;

    // 4. Цикл з параметром (for на зменшення)
    P = 1;
    for (j = N; j >= k; j--)
    {
        P *= sqrt(( j * j) / (1 + exp(-1.0 * j)));
    }
    cout << P << endl;

    return 0;
}
