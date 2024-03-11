#include <iostream>
#include <string>
using namespace std;

//Def.objeto rectangular
struct Objeto {
    string angulo;
    int IzqX;
    int IzqY;
    int DerX;
    int DerY;
};
//Cal. Area rectangular
int Area(const Objeto& objeto) {
    int longitud = objeto.DerX - objeto.IzqX;
    int ancho = objeto.IzqY - objeto.DerY;
    return longitud * ancho;
}

int main() {
    //dos objetos con coordenadas en diagonal
    Objeto objeto1 = { "Objeto1", 0 ,3, 4, 0 };
    Objeto objeto2 = { "Objeto2", 2, 5, 6, 1 };
    //Cal. y ver el área de los objetos
    int areaObjeto1 = Area(objeto1);
    int areaObjeto2 = Area(objeto2);
    cout << "Area de:" << objeto1.angulo << ":" << areaObjeto1 << endl;
    cout << "--------------------------------------" << endl;
    cout << "Area de:" << objeto2.angulo << ":" << areaObjeto2 << endl;
    return 0;
}