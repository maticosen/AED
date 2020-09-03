#include <iostream>
#include <cassert>
#include <array>

using namespace std;

enum struct Color {Rojo, Verde, Azul, Cyan, Magenta, Amarillo, Negro, Blanco};
struct Punto {double x, y;};
struct Triangulo {array<Punto,3> v; Color c;};
enum struct ClasifT {Equilatero, Isosceles, Escaleno};
struct Poligono {unsigned n; array<Punto,13> v; Color c;};
enum struct ClasifP {Triangulo=3, Cuadrilatero, Pentagono, Hexagono, Heptagono, Octagono, Nonagono, Decagono, Endecagono, Dodecagono};

bool IsIgual (Punto&, Punto);
void GetDistancia (Punto&, Punto);
void GetDistanciaAlOrigen (Punto&, Punto);

void SetTriangulo (Triangulo&);
int GetPerimetro (const Triangulo&);
int GetArea (const Triangulo&);
ClasifT GetClasificacionT (const Triangulo&);
void ChangeColor (Triangulo&, Color);

void SetPoligono (Poligono&);
void ChangeColor (Poligono&, Color);
void AddNewPoint (Poligono&, Punto);
void RmvPoint (Poligono&, Punto);
int GetPerimetro (const Poligono&);
int GetArea (const Poligono&);
ClasifP GetClasificacionP (const Poligono&);

int main ()
{}