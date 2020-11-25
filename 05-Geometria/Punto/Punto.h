/*  Geometria - Punto
    Matias Cosentino
    13092020
*/

#include <cassert>
#include <cmath>

struct Punto {double x, y;};

bool IsIgual (const Punto&, const Punto&);
double GetDistancia (const Punto&, const Punto&);
double GetDistanciaAlOrigen (const Punto&);