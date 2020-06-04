/*  Función F3
    Matias Cosentino
    02062020
*/

#include <iostream>
#include <cassert>

double Step (double);

int main ()
{
    assert (-5 == Step (-5));
    assert (-3 == Step (3));    
    assert (0 == Step (0));
    assert (1 == Step (-1));
    assert (3.01 == Step (3.01)); 
}

double Step (double x)
{
    return -3<=x and x<=3 ? -x : x;
}