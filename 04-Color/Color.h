/*  Tipo Color
    Matias Cosentino
    13092020
*/

#include <iostream>
#include <cassert>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

struct Color {uint8_t r, g, b;};

const Color rojo {255,0,0};
const Color verde {0,255,0};
const Color azul {0,0,255};

bool IsIgual (const Color&, const Color&);
Color Mezclar (const Color, const Color);
Color Sumar (const Color&, const Color&);
Color Restar (const Color&, const Color&);
Color GetComplentario (const Color&);
string GetHtmlHex (const Color&);
string GetHtmlRgb (const Color&);
void CrearSvgConTextoEscritoEnAltoContraste (const string&, const string&, const Color&);

const Color cyan = Sumar(verde, azul);                  //{0,255,255}
const Color magneta = Sumar(rojo, azul);                //{255,0,255}
const Color amarillo = Sumar(rojo, verde);              //{255,255,0}
const Color negro = Restar(rojo, rojo);                 //{0,0,0}
const Color blanco = Sumar(rojo, Sumar(verde, azul));   //{255,255,255}