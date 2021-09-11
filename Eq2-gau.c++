#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
     float a, b, c, delta,
          arvore1, arvore2, x;
    repetir:
    cout << "Coeficiente a: ";
    cin >> a;

    cout << "Coeficiente b: ";
    cin >> b;

    cout << "Coeficiente c: ";
    cin >> c;

    if(a != 0){
        delta = (b*b) - (4*a*c);

        if(delta<0){
            cout <<"Não tem raízes reais\n";
        }
        else if (delta==0){
            arvore1=(-b)/(2*a);
            cout << "Possui apenas uma raiz real: "<<arvore1<<endl;
        }else{
            arvore1=(-b - sqrt(delta))/(2*a);
            arvore2=(-b + sqrt(delta))/(2*a);
            cout << "Raiz 1: "<<arvore1<<endl;
            cout << "Raiz 2: "<<arvore2<<endl;
        }
    }else{
        cout <<"a=0, não é uma equação do segundo grau\n";
    }


    cout<<"quer fazer mais contas ou encerrar ?(1 para sim e 2 para não\n";
    cin>>x;

    if(x==1){
    goto repetir;
    }else{
    return(0);
    }
    
        system("pause");
}
