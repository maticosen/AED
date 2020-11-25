/*  Geometria - Punto
    Matias Cosentino
    13092020
*/

#include "Punto.h"

int main ()
{
    assert (IsIgual({3,3},{3,3})); 
    assert (not IsIgual({1,2},{3,4})); 

    assert (GetDistancia({1,-8},{7,0}) == 10);
    assert (not GetDistancia({-2,-3},{-1,-4}) == 1.41);  //1,41421

    assert (GetDistanciaAlOrigen({-5,12}) == 13);
    assert (not GetDistanciaAlOrigen({1,1}) == 1.41);
}