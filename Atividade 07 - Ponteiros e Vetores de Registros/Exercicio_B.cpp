#include <iostream>
using namespace std;

typedef struct
{
    float x, y, z;
} vetor;

void preenche(vetor *vet)
{
    cout << "Digite 3 numeros (separados por enter):" << endl;
    cin >> vet->x >> vet->y >> vet->z;
}

int main()
{
    int N = 2, j = 0;
    vetor um[N], dois[N];
    do
    {
        preenche(&um[j]);
        preenche(&dois[j]);
        j++;
    } while (j < N);
    for (int i = 0; i < N; i++)
    {
        cout << "Soma de x dos vetores de num:" << i << "= " << um[i].x + um[i].x << endl
             << "Soma de y dos vetores de num:" << i << "= " << um[i].y + um[i].y << endl
             << "Soma de z dos vetores de num:" << i << "= " << um[i].z + um[i].z << endl
             << endl;
    }
    return 0;
}