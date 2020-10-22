/*  Flujos  - Poligono
    Matias Cosentino
    21102020
*/

#include <array>
#include <cstdint>
#include <fstream>
#include <iostream>

using namespace std;

struct Color {uint8_t r, g, b;};
struct Punto {double x, y;};
struct Poligono {unsigned n=0; array<Punto,12> v; Color col;};

bool ExtraerPoligono(istream&, Poligono&);
bool ExtraerColor(istream&, Color&);
bool ExtraerPuntos(istream&, Poligono&);
bool ExtraerPunto(istream&, Punto&);
void AgregarPunto(Poligono&, Punto, uint8_t);
bool EnviarPoligono(ostream&, Poligono&);
bool EnviarColor(ostream&, Color&);
bool EnviarPunto(ostream&, Punto);