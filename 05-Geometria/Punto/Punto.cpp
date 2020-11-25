/*  Geometria - Punto
    Matias Cosentino
    13092020
*/

#include "Punto.h"

bool IsIgual (const Punto& p1, const Punto& p2)
{
    return (p1.x==p2.x) and (p1.y==p2.y);
}

double GetDistancia (const Punto& p1, const Punto& p2)
{
    return sqrt(pow((p2.x-p1.x),2) + pow((p2.y-p1.y),2));
}

double GetDistanciaAlOrigen (const Punto& p1)
{
    return sqrt(pow(p1.x,2) + pow(p1.y,2));
}