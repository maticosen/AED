/*  Flujos  - Poligono
    Matias Cosentino
    21102020
*/

#include "Flujos.h"

bool ExtraerPoligono (istream& in1, Poligono& pol1)
{
	ExtraerColor(in1, pol1.col);
	ExtraerPuntos(in1, pol1);
	return (bool) in1;
}

bool ExtraerColor (istream& in1, Color& col1)
{
	char c;
    unsigned x;

    in1 >> x;
    col1.r = (uint8_t) x;
	in1.get(c);
	in1 >> x;
	col1.g = (uint8_t) x;
    in1.get(c);
	in1 >> x;
	col1.b = (uint8_t) x;
    in1.get(c);
//    cout << "(" << +(col1.r) << ";" << +(col1.g) << ";" << +(col1.b) << ")\n";
	return (bool) in1;
}

bool ExtraerPuntos (istream& in1, Poligono& pol1)
{
    Punto p1;
    char c;
    uint8_t i=0;

    while(c!='\n' and not in1.eof())
    {
        ExtraerPunto(in1, p1);
        AgregarPunto(pol1, p1, i);
        i++;
        in1.get(c);
    }
    pol1.n = i;
	return (bool) in1;
}

bool ExtraerPunto (istream& in1, Punto& p1)
{
	char c;

	in1 >> p1.x;
	in1.get(c);
	in1 >> p1.y;
//	in1.get(c);
//    cout << "(" << p1.x << ";" << p1.y << ")\n";
	return (bool) in1;
}

void AgregarPunto (Poligono& pol1, Punto p1, uint8_t ind)
{
    pol1.v.at(ind).x = p1.x;
    pol1.v.at(ind).y = p1.y;
//    cout << "Punto[" << pol1.n << "]=(" << pol1.v.at(pol1.n).x << "," << pol1.v.at(pol1.n).y << ")\n";
    pol1.n ++;
}

bool EnviarPoligono(ostream& out1, Poligono& pol1)
{
//    out1 <<"El poligono de " << pol1.n <<" lados, cuyo color es " << GetHtmlRgb(pol1.col) << " posee los puntos: ";
    out1 <<"El poligono de " << pol1.n <<" lados, cuyo color es ";
    EnviarColor (out1, pol1.col);
    out1 << " posee los puntos: ";
    for (uint8_t i=0 ; i<pol1.n ; i++)
        EnviarPunto(out1, pol1.v.at(i));
    out1 << "\n";
    return (bool) out1;
}

bool EnviarColor (ostream& out1, Color& col1)
{
	out1 << "rgb(" << +(col1.r) << "," << +(col1.g) << "," << +(col1.b) << ")";
    return (bool) out1;
}

bool EnviarPunto (ostream& out1, Punto p1)
{
	out1 << "(" << p1.x << ";" << p1.y << ")";
    return (bool) out1;
}