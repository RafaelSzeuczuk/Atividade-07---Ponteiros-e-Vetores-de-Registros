#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef struct
{
    string naipe, valor;
} Carta;

void cria_baralho(Carta *baralho)
{
    string naipes[4] = {"Espadas", "Paus ", "Ouros ", "Copas "};
    string valores[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    bool cartaDistribuida[4][13]={false};
    for (int i = 0; i < 5 ; i++){
        int x,z;
        do{
            unsigned seed = time(0);
            srand(seed);
            x=rand() % 4;
            z= rand() % 13;
        }while(cartaDistribuida[x][z]);
        cartaDistribuida[x][z]=true;
        baralho[i].naipe=naipes[x];
        baralho[i].valor=valores[z];
    }
    
}

int main()
{
    Carta Jogador1[5], Jogador2[5];
    cria_baralho(Jogador1);
    cria_baralho(Jogador2);
    cout<<"Cartas jogador 1:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< Jogador1[i].naipe<<"_ "<<Jogador1[i].valor<<"  /  ";
    }
    cout<<"\nCartas jogador 2:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< Jogador2[i].naipe<<"_ "<<Jogador2[i].valor<<"  /  ";
    }
    return 0;
}