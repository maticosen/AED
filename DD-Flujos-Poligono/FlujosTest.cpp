/*  Flujos  - Poligono
    Matias Cosentino
    21102020
*/

#include "Flujos.h"

int main () 
{ 
    Punto p;
    Poligono pol;

    while (ExtraerPoligono(cin, pol))
    {
        if (Get_GetPerimetro(pol) > 30.0)
            EnviarPoligono(cout, pol);
    }
}
