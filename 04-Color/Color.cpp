#include <iostream>
#include <cassert>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <fstream>

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
void CrearSvgConTextoEscritoEnAltoContraste (const char*, const char*, const Color&);

const Color cyan = Sumar(verde, azul);                  //{0,255,255}
const Color magneta = Sumar(rojo, azul);                //{255,0,255}
const Color amarillo = Sumar(rojo, verde);              //{255,255,0}
const Color negro = Restar(rojo, rojo);                 //{0,0,0}
const Color blanco = Sumar(rojo, Sumar(verde, azul));   //{255,255,255}

int main()
{
    assert (IsIgual(rojo, rojo));
    assert (not IsIgual(rojo, azul));
    
    Color gris {128,128,128};
    Color col_mezcla = Mezclar(blanco, negro);
    assert ((gris.r,gris.g,gris.b) == (col_mezcla.r,col_mezcla.g,col_mezcla.b));

    Color col_suma = Sumar(rojo, verde);
    assert ((amarillo.r,amarillo.g,amarillo.b) == (col_suma.r,col_suma.g,col_suma.b));

    Color col_resta = Restar(azul, cyan);
    assert ((verde.r,verde.g,verde.b) == (col_resta.r,col_resta.g,col_resta.b));

    Color col_comp = GetComplentario (blanco);
    assert ((negro.r,negro.g,negro.b) == (col_comp.r,col_comp.g,col_comp.b));
    
    assert ("#0000ff" == GetHtmlHex(azul));

    assert("rgb(0,0,255)" == GetHtmlRgb(azul));

    CrearSvgConTextoEscritoEnAltoContraste ("Mensaje", "¡Hola, Mundo!", cyan);
 
}

bool IsIgual (const Color& col1, const Color& col2)
{
    double dist;
//    cout << "Color1(" << +(col1.r) << "," << +(col1.g) << ","<< +(col1.b) << ")\n";
//    cout << "Color2(" << +(col2.r) << "," << +(col2.g) << ","<< +(col2.b) << ")\n";
    dist = sqrt (pow(col1.r-col2.r,2) + pow(col1.g-col2.g,2) + pow(col1.b-col2.b,2));
//    cout << "Valor: "<< dist << "\n";
    return dist == 0;
}

Color Mezclar (const Color col1, const Color col2)
{
    Color col3;

    col3.r = ((col1.r + col2.r)/2) + ((col1.r + col2.r)%2);
    col3.g = ((col1.g + col2.g)/2) + ((col1.g + col2.g)%2);
    col3.b = ((col1.b + col2.b)/2) + ((col1.b + col2.b)%2);
//    cout << "Color3(" << +(col3.r) << "," << +(col3.g) << ","<< +(col3.b) << ")\n";
    return col3;
}

Color Sumar (const Color& col1, const Color& col2)
{
    Color col3;

    col3.r = (col1.r + col2.r) > 255 ? 255 : (col1.r + col2.r);
    col3.g = (col1.g + col2.g) > 255 ? 255 : (col1.g + col2.g);
    col3.b = (col1.b + col2.b) > 255 ? 255 : (col1.b + col2.b);
//    cout << "Color3(" << +(col3.r) << "," << +(col3.g) << ","<< +(col3.b) << ")\n";
    return col3;
}

Color Restar (const Color& col1, const Color& col2)
{
    Color col3;
 
    col3.r = sqrt (pow(col1.r-col2.r,2));
    col3.g = sqrt (pow(col1.g-col2.g,2));
    col3.b = sqrt (pow(col1.b-col2.b,2));
//    cout << "Color3(" << +(col3.r) << "," << +(col3.g) << ","<< +(col3.b) << ")\n";
    return col3;
}

Color GetComplentario (const Color& col1)
{
    Color col3;

    col3.r = 255 - col1.r;
    col3.g = 255 - col1.g;
    col3.b = 255 - col1.b;
//    cout << "Color3(" << +(col3.r) << "," << +(col3.g) << ","<< +(col3.b) << ")\n";
    return col3;
}

string GetHtmlHex (const Color& col1)
{
    char hexdec_num[14]="";

    sprintf(hexdec_num, "#%02x%02x%02x", col1.r,col1.g,col1.b);
//    cout << hexdec_num;
    return hexdec_num;
}

string GetHtmlRgb (const Color& col1)
{
    char hexdec_rgb[14]="";

    sprintf(hexdec_rgb, "rgb(%d,%d,%d)", col1.r,col1.g,col1.b);
//    cout << hexdec_rgb;
    return hexdec_rgb;
}

void CrearSvgConTextoEscritoEnAltoContraste (const char* str1, const char* str2, const Color& col1)
{
    char titulo[30]="";
    strcpy (titulo,str1);
    strcat (titulo,".svg");

    ofstream file;
    file.open (titulo);
    file << "<svg xmlns=\"http://www.w3.org/2000/svg\">\n";
    file << " <rect x=\"0\" y=\"0\" height=\"30\" width=\"120\" style=\"fill:  "<< GetHtmlHex (GetComplentario (col1)) << "\"/>\n";
    file << " <text x=\"5\" y=\"18\" style=\"fill: " << GetHtmlRgb(col1) << ";background-color: " << GetHtmlHex (GetComplentario (col1)) << "\">\n";
    file << " " << str2 << "\n"; 
    file << " </text>\n"; 
    file << "</svg>";
    file.close();
}