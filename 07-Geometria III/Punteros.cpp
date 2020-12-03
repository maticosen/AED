/*  Punteros  - Poligono
    Matias Cosentino
    02122020
*/

#include "Punteros.h"

void CopiarPoligonosConPerimetrosMayoresA(double x, string nombreArchivoIn, string nombreArchivoOut)
{
    Poligono pol;
  
    ifstream in(nombreArchivoIn);
    ofstream out(nombreArchivoOut);

    while (ExtraerPoligono(in, pol))
    {
        if (GetPerimetro(pol) > x)
            InsertarPoligono(out, pol);
        LiberarEspacio(pol);
    }
    
    in.close();
    out.close();
}

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
//  cout << "(" << +(col1.r) << ";" << +(col1.g) << ";" << +(col1.b) << ")\n";
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
        AgregarPunto_final(pol1, p1, i);
//      AgregarPunto_inicio(pol1, p1, i);        
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
//  cout << "(" << p1.x << ";" << p1.y << ")\n";
	return (bool) in1;
}

void AgregarPunto_final (Poligono& pol1, Punto p1, uint8_t ind)
{
    Nodo* nuevo = new Nodo(); //Se almacena en la memoria Heap un espacio lo suficientemente grande como para guardar un nodo de dicha estructura y retorna la direccion de memoria donde quedo almacenado, la cual se va a guardar en la variable "nuevo" (que esta en la Stack) que es un puntero a "Nodo"
    nuevo->p = p1;
    pol1.n ++;

    //Si la lista esta VACIA
    if (pol1.vertice == nullptr)
        pol1.vertice = nuevo;

    //Si la lista ya posee elementos, utilizo un nodo auxiliar para recorrerla y posicionarme en el ultimo elemento y finalmente insertar el nuevo punto
    else
    {
        Nodo* aux = pol1.vertice;   //Puntero auxiliar que va a tener la direccion de memoria del primero de los nodos
        while (aux->next != nullptr)
            aux = aux->next;
        aux->next = nuevo;
    }        
}

void AgregarPunto_inicio (Poligono& pol1, Punto p1, uint8_t ind)
{
    Nodo* nuevo = new Nodo(); //Se almacena en la memoria Heap un espacio lo suficientemente grande como para guardar un nodo de dicha estructura y retorna la direccion de memoria donde quedo almacenado, la cual se va a guardar en la variable "nuevo" (que esta en la Stack) que es un puntero a "Nodo"
    nuevo->p = p1;
    pol1.n ++;

    //Si la lista esta VACIA
    if (pol1.vertice == nullptr)
        pol1.vertice = nuevo;

    //Si la lista ya posee elementos, inserto el punto al principio de la lista. Primero debo apuntar el nuevo nodo al existente de la lista
    else
    {
        nuevo->next = pol1.vertice;
        pol1.vertice = nuevo;
    }        
}

bool InsertarPoligono(ostream& out1, const Poligono& pol1)
{
//  out1 <<"El poligono de " << pol1.n <<" lados, cuyo color es " << GetHtmlRgb(pol1.col) << " posee los puntos: ";
    out1 <<"El poligono de " << pol1.n <<" lados, cuyo color es ";
    InsertarColor (out1, pol1.col);
    out1 << " posee los puntos: ";
    InsertarPuntos (out1, pol1);
//  for (uint8_t i=0 ; i<pol1.n ; i++)
//      InsertarPunto(out1, pol1.v.at(i));
    out1 << "\n";
    return (bool) out1;
}

bool InsertarColor (ostream& out1, const Color& col1)
{
	out1 << "rgb(" << +(col1.r) << "," << +(col1.g) << "," << +(col1.b) << ")";
    return (bool) out1;
}

bool InsertarPuntos (ostream& out1, const Poligono& pol1)
{
    for (Nodo* aux = pol1.vertice; aux != nullptr; aux = aux->next)
        InsertarPunto(out1, aux->p);
    return (bool) out1;
}

bool InsertarPunto (ostream& out1, const Punto p1)
{
	out1 << "(" << p1.x << ";" << p1.y << ")";
    return (bool) out1;
}

void LiberarEspacio (Poligono& pol1) 
{
    uint8_t i = pol1.n;

    for (uint8_t j=0 ; j<=i ; j++)
    {
        RemoverVertice_inicio(pol1);
//      RemoverVertice_final(pol1);
    }
   
}

void RemoverVertice_final (Poligono& pol1) 
{
    if (pol1.vertice != nullptr)                //Verifico que la lista no esta vacia
    {
        Nodo* aux = pol1.vertice;               //Creo nodo "auxiliar" apuntando al primero elemento de la lista

        if (aux->next != nullptr)               //Verifico si hay un solo elemento en la lista
        {
            while (aux->next->next != nullptr)  //Me posiciono en el anteultimo elemento de la lista
                aux = aux->next;

            delete aux->next;                   //Borro el ultimo nodo
            aux->next = nullptr;                //El anteultimo nodo pasa a ser el utlimo y debo enlazar el siguiente con Null
            pol1.n --;
        }
    }
}

void RemoverVertice_inicio (Poligono& pol1)
{ 
    if (pol1.vertice != nullptr)            //Verifico que la lista no esta vacia
    {
        Nodo* aux = pol1.vertice;           //Creo nodo "auxiliar" apuntando al primero elemento de la lista
        pol1.vertice = pol1.vertice->next;  //El inicio de la lista lo reapunto al segundo vertice
        delete aux;                         //Borro el primer nodo
        pol1.n --;
    }
}


double GetPerimetro (const Poligono& pol1)
{
    double perm = 0.0;
    Nodo* aux1 = pol1.vertice;
    Nodo* aux2 = pol1.vertice->next;

    while (aux2 != nullptr)
    {
        perm += GetDistancia (aux1->p, aux2->p);
        aux1 = aux2;
        aux2 = aux2->next;
    }
    perm += GetDistancia (pol1.vertice->p, aux1->p);
//    cout << perm << "\n";
    return perm;
}

double GetDistancia (Punto p1, Punto p2)
{
    return sqrt (pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2));
}