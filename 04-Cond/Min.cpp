/*  Valor mínimo entre dos valores
    Matias Cosentino
    02062020
*/

#include <iostream>
#include <cassert>

int Min (int, int);

int main ()
{
    assert (-3 == Min (-3,-1));
    assert (0 == Min (0,0));
    assert (3 == Min (5,3));
}

int Min (int x, int y)
{
    return x<y ? x : y;
}