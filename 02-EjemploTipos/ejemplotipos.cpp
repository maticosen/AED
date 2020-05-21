/*  EjemploTipos
    Matias Cosentino
    20052020
*/

#include <iostream>
#include <cassert>
#include <cstring>

int main ()
{
    //Tipo BOOL: se realiza la operacion AND entre 2 valores
    bool v=true, f=false;
    assert (false == (v and f));

    //Tipo CHAR: se realiza la comparacion de un caracter con su representación entera en el código ASCII
    char c='%';
    assert (37 == c);

    //Tipo STRING: se realiza la concatenacion de 2 cadenas
    std::string s1="Hello,", s2=" World!";
    assert ("Hello, World!" == (s1+s2));

    //Tipo UNSIGNED: se determina la longitud de la cadena concatenada anteriormente
    unsigned l;
    l = (s1+s2).length();
    assert (13 == l);

    //Tipo INT: se realiza la multiplicacion de 2 enteros
    int i1=-1, i2=10;
    assert (-10 == (i1*i2));

    //Tipo DOUBLE: se realiza la division de 2 numeros
    double d1=10, d2=3, res;
    assert (3.34 >= (d1/d2));
}