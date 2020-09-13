/*  Geometria - Poligono
    Matias Cosentino
    13092020
*/

#include "Poligono.h"

int main ()
{
    Poligono pol;

    SetColor (pol, azul);
    assert ((0,0,255) == (pol.col.r,pol.col.g,pol.col.b));

    AddVertice (pol, {1,-2});
    AddVertice (pol, {-1,0});
    AddVertice (pol, {1,2});
    AddVertice (pol, {3,0});

    assert ((1,-2) == (GetVertice (pol, 0).x,GetVertice (pol, 0).y));
    assert ((1,2) == (GetVertice (pol, 2).x,GetVertice (pol, 2).y));

    SetVertice (pol, 3, {1,4});
    assert ((1,4) == (GetVertice (pol, 3).x,GetVertice (pol, 3).y));

    RemoveVertice (pol);
    assert (3 == GetCantidadLados (pol));

    AddVertice (pol, {5,5});
    assert (4 == GetCantidadLados (pol));

    assert (18.7191 <= Get_GetPerimetro (pol));
}