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
    double dist = 0.0;
    int j = pol1.n -1;

    for (int i = 0; i < pol1.n; i++)
    {
//        cout << "Punto[i]=(" << pol1.v.at(i).x << "," << pol1.v.at(i).y << ")\t";
//        cout << "Punto[j]=(" << pol1.v.at(j).x << "," << pol1.v.at(j).y << ")\n";
        dist += sqrt (pow(pol1.v.at(i).x-pol1.v.at(j).x,2) + pow(pol1.v.at(i).y-pol1.v.at(j).y,2));
        j = i;
    }
//    cout << dist << "\n";
    return dist;
}
