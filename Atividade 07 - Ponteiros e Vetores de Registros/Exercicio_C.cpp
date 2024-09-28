#include <iostream>
using namespace std;

typedef struct
{
    int a, b;
} complexo;

void soma(complexo a, complexo b)
{
    cout << a.a + b.a;
    if((a.b + b.b)>=0)cout<<"+";
    cout<< a.b + b.b << "i" << endl;
}

void subt(complexo a, complexo b)
{
    cout << a.a - b.a ;
    if((a.b - b.b)>=0) cout<< "+" ;
    cout<< a.b - b.b << "i" << endl;
}

void mult(complexo a, complexo b)
{
    int real = a.a * b.a - a.b * b.b;
    int imag = a.a * b.b + a.b * b.a;
    cout << real;
    if(imag >= 0) cout << "+";
    cout << imag << "i" << endl;
}

int main()
{
    complexo um, dois;
    cout << "Digite a parte real e a parte imaginaria i do primeiro: " << endl;
    cin >> um.a >> um.b;
    cout << "Digite a parte real e a parte imaginaria i do segundo: " << endl;
    cin >> dois.a >> dois.b;
    soma(um, dois);
    subt(um, dois);
    mult(um, dois);
}