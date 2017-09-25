#include <iostream>
#include "Retangulo.h"



Retangulo::Retangulo(float x, float y, float altura, float largura)
{
    Point p2;// ponto auxiliar para usar no metodo inserir
    altura = altura;
    largura = largura;
    x = x;
    y = y;
    CdM.setX(x + largura/2);
    CdM.setY(y - altura/2);


    p2 = Point(x,y);
    inserir(p2);
    p2.translada(largura,0);
    inserir(p2);
    p2.translada(0,-altura);
    inserir(p2);
    p2.translada(-largura,0);
    inserir(p2);

}

void Retangulo::translada(float a,float b)
{
    int i;
    for(i=0; i<n; i++)
    {
        vertice[i].translada(a, b);
    }
    CdM.translada(a,b);
}

Point Retangulo::getCdM()
{
    return CdM;
}
