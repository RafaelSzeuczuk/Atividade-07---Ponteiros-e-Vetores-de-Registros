#include <iostream>
using namespace std;

typedef struct
{
    int hora, minuto;
} Horario;

typedef struct
{
    int dia, mes, ano;
} Dia;

typedef struct
{
    Dia data;
    Horario hora;
    string compromisso;
} Agenda;

int preenche(Agenda *compromisso)
{
    cout << "Digite o dia, mes e ano (separados por enter): " << endl;
    cin >> compromisso->data.dia >> compromisso->data.mes >> compromisso->data.ano;
    cout << "Digite a(s) hora(s) e o(s) minuto(s) (separados por enter): " << endl;
    cin >> compromisso->hora.hora >> compromisso->hora.minuto;
    cout << "Digite o compromisso: ";
    cin.get();
    getline(cin, compromisso->compromisso);
    return (1);
}

void imprime(Agenda *compromisso)
{
    cout << "Dia, mes e ano: " << compromisso->data.dia << "/" << compromisso->data.mes << "/" << compromisso->data.ano << endl
         << "Hora(s) e o(s) minuto(s): " << compromisso->hora.hora << ":" << compromisso->hora.minuto << endl
         << "Compromisso: " << compromisso->compromisso << endl;
}

int main()
{
    int N = 0;
    char continua;
    Agenda compromisso[1000];
    do
    {
        N += preenche(&compromisso[N]);
        cout << "Continua? S/N ";
    } while (cin >> continua && continua == 'S' || continua == 's');

    cout << endl;
    for (int i = 0; i < N; i++)
    {
        imprime(&compromisso[i]);
        cout << endl;
    }
    return 0;
}