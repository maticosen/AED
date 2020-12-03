/*  Punteros  - Poligono
    Matias Cosentino
    02122020
*/

#include <array>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

struct Color {uint8_t r, g, b;};
struct Punto {double x, y;};
//struct Poligono {unsigned n=0; array<Punto,12> v; Color col;};

struct Nodo {
    Punto p;
    Nodo* next{nullptr};
};

struct Poligono {
    Color col;
    unsigned n = 0;
    Nodo* vertice{nullptr};
};


bool ExtraerPoligono(istream&, Poligono&);
bool ExtraerColor(istream&, Color&);
bool ExtraerPuntos(istream&, Poligono&);
bool ExtraerPunto(istream&, Punto&);
void AgregarPunto_final(Poligono&, Punto, uint8_t);         //Agrega punto al final de la lista
void AgregarPunto_inicio(Poligono&, Punto, uint8_t);        //Agrega punto al inicio de la lista
bool InsertarPoligono(ostream&, const Poligono&);
bool InsertarColor(ostream&, const Color&);
bool InsertarPuntos(ostream&, const Poligono&);
bool InsertarPunto(ostream&, const Punto);
void LiberarEspacio (Poligono&);
void RemoverVertice_inicio(Poligono&);                      //Elimino vertices desde el principio de la lista
void RemoverVertice_final(Poligono&);                       //Elimino vertices desde el final de la lista
double GetPerimetro (const Poligono&);
double GetDistancia (Punto, Punto);
void CopiarPoligonosConPerimetrosMayoresA(double, string, string);