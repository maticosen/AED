/*  Valor absoluto
    Matias Cosentino
    02062020
*/

#include <iostream>
#include <cassert>

int Abs (int);

int main ()
{
    assert (3 == Abs(-3));
    assert (0 == Abs(0));
    assert (3 == Abs(3));
}

int Abs (int x)
{
    return x<0 ? -x : x;
}