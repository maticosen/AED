/*  Geometria - Poligono
    Matias Cosentino
    13092020
*/

#include "Poligono.h"

void SetColor (Poligono& pol1, const Color& c1)
{
    pol1.col.r = c1.r;
    pol1.col.g = c1.g;
    pol1.col.b = c1.b;
}

void AddVertice (Poligono& pol1, Punto p1)
{
    pol1.v.at(pol1.n).x = p1.x;
    pol1.v.at(pol1.n).y = p1.y;
//    cout << "Punto[" << pol1.n << "]=(" << pol1.v.at(pol1.n).x << "," << pol1.v.at(pol1.n).y << ")\n";
    pol1.n ++;
}

Punto GetVertice (Poligono& pol1, unsigned ind)
{
    Punto p2;

    p2.x = pol1.v.at(ind).x;
    p2.y = pol1.v.at(ind).y;
//    cout << "Punto[p2]=(" << p2.x << "," << p2.y << ")\n";
    return p2;
}

void SetVertice (Poligono& pol1, unsigned ind, Punto p1)
{
//    cout << "Punto[" << ind << "]=(" << pol1.v.at(ind).x << "," << pol1.v.at(ind).y << ")\n";
    pol1.v.at(ind).x = p1.x;
    pol1.v.at(ind).y = p1.y;
//    cout << "Punto[" << ind << "]=(" << pol1.v.at(ind).x << "," << pol1.v.at(ind).y << ")\n";
}

void RemoveVertice (Poligono& pol1)
{
    pol1.n --;
}

unsigned GetCantidadLados (const Poligono& pol1)
{
    return pol1.n;
}

double GetPerimetro (const Poligono& pol1)
{
    double perm = 0.0;

    for (int i = 0, j = pol1.n - 1; i < pol1.n; i++)
    {
        perm += GetDistancia (pol1.v.at(i), pol1.v.at(j));
        j = i;
    }
//  cout << perm << "\n";
    return perm;
}

double GetDistancia (Punto p1, Punto p2)
{
//  cout << "Punto[1]=(" << p1.x << "," << p1.y << ")\t";
//  cout << "Punto[2]=(" << p2.x << "," << p2.y << ")\n";
    return sqrt (pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));
}
