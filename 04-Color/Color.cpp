/*  Tipo Color
    Matias Cosentino
    13092020
*/

#include "Color.h"

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
    stringstream stream;
    string str;

    stream << "#" << std::setfill('0') << std::setw(2) << std::hex << +(col1.r) << std::setfill('0') << std::setw(2) << std::hex << +(col1.g) << std::setfill('0') << std::setw(2) << std::hex << +(col1.b);
    str = stream.str();
//    cout << str;
    return str;
} 

string GetHtmlRgb (const Color& col1)
{
    stringstream stream;
    string str;

    stream << "rgb(" << +(col1.r) << "," << +(col1.g) << "," << +(col1.b) << ")";
    str = stream.str();
//    cout << str;
    return str;
}

void CrearSvgConTextoEscritoEnAltoContraste (const string& str1, const string& str2, const Color& col1)
{
    string titulo;
    titulo.append (str1);
    titulo.append (".svg");

    ofstream file;
    file.open (titulo);
    file << "<svg xmlns=\"http://www.w3.org/2000/svg\">\n";
    file << " <rect x=\"0\" y=\"0\" height=\"30\" width=\"120\" style=\"fill:  " << GetHtmlHex (GetComplentario (col1)) << "\"/>\n";
    file << " <text x=\"5\" y=\"18\" style=\"fill: " << GetHtmlRgb(col1) << ";background-color: " << GetHtmlHex (GetComplentario (col1)) << "\">\n";
    file << " " << str2 << "\n"; 
    file << " </text>\n"; 
    file << "</svg>";
    file.close();
}
