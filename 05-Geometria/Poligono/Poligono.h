/*  Geometria - Poligono
    Matias Cosentino
    13092020
*/

#include <iostream>
#include <array>
#include <cassert>
#include <cmath>

using namespace std;

struct Color {uint8_t r, g, b;};

const Color rojo {255,0,0};
const Color verde {0,255,0};
const Color azul {0,0,255};

struct Punto {double x, y;};
struct Poligono {unsigned n=0; array<Punto,12> v; Color col;};

void SetColor (Poligono&, const Color&);
void AddVertice (Poligono&, Punto); 
Punto GetVertice (Poligono&, unsigned); 
void SetVertice (Poligono&, unsigned, Punto); 
void RemoveVertice (Poligono&);
unsigned GetCantidadLados (const Poligono&);
double GetPerimetro (const Poligono&);
double GetDistancia (Punto, Punto);