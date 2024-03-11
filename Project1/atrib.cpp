//atributo y constructores del ejercicio 2
#include <iostream>
#include <string>
using namespace std;

class Rectangulo {
private:
    string nombre;
    int IzqX;
    int IzqY;
    int DerX;
    int DerY;

public:
    // Constructor predeterminado
    Rectangulo() : nombre(""), IzqX(0), IzqY(0), DerX(0), DerY(0) {}

    // Constructor
    Rectangulo(string angulo, int x1, int y1, int x2, int y2)
        : nombre(angulo), IzqX(x1), IzqY(y1), DerX(x2), DerY(y2) {}

    // Método para calcular el área del rectángulo
    int calcularArea() const {
        int longitud = DerX - IzqX;
        int ancho = IzqY - DerY;
        return longitud * ancho;
    }

    // Método para obtener el nombre del rectángulo
    string obtenerNombre() const {
        return nombre;
    }
};

int main() {
    // Crear dos objetos Rectangulo
    Rectangulo rectangulo1("Rectangulo1", 0, 3, 4, 0);
    Rectangulo rectangulo2("Rectangulo2", 2, 5, 6, 1);

    // Calcular y mostrar el área de los rectángulos
    int areaRectangulo1 = rectangulo1.calcularArea();
    int areaRectangulo2 = rectangulo2.calcularArea();

    cout << "Área de " << rectangulo1.obtenerNombre() << ": " << areaRectangulo1 << endl;
    cout << "--------------------------------------" << endl;
    cout << "Área de " << rectangulo2.obtenerNombre() << ": " << areaRectangulo2 << endl;

    return 0;
}
