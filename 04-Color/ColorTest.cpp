/*  Tipo Color
    Matias Cosentino
    13092020
*/

#include "Color.h"

int main()
{
    Color gris {128,128,128};

    assert (IsIgual(rojo, rojo));
    assert (not IsIgual(rojo, azul));
    assert (IsIgual(gris, Mezclar(blanco, negro)));
    assert (IsIgual(amarillo, Sumar(rojo, verde)));
    assert (IsIgual(blanco, Sumar(rojo, Sumar(verde, azul))));
    assert (IsIgual(verde, Restar(azul, cyan)));
    assert (IsIgual(negro, Restar(rojo, rojo)));
    assert (IsIgual(azul, GetComplentario(amarillo)));   
    assert (IsIgual(negro, GetComplentario(blanco)));
    assert ("#0000ff" == GetHtmlHex(azul));
    assert ("#ffffff" == GetHtmlHex(blanco));    
    assert("rgb(255,255,0)" == GetHtmlRgb(amarillo));
    assert("rgb(255,0,255)" == GetHtmlRgb(magneta));    

    CrearSvgConTextoEscritoEnAltoContraste ("Mensaje", "¡Hola, Mundo!", cyan);
}