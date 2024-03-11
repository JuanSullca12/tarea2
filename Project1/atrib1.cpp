//atributo y constructores del ejercicio 1
#include<iostream>
#include<cmath>
using namespace std;

class TrianguloRectangulo {
private:
    double lado1;
    double lado2;
    double hipotenusa;

public:

    TrianguloRectangulo(double l1, double l2) : lado1(l1), lado2(l2) {
        hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    }

    
    double calcularArea() const {
        return (lado1 * lado2) / 2;
    }

    
    double obtenerHipotenusa() const {
        return hipotenusa;
    }

    
    void mostrarInformacion() const {
        cout << "Lado 1: " << lado1 << endl;
        cout << "Lado 2: " << lado2 << endl;
        cout << "Hipotenusa: " << hipotenusa << endl;
        cout << "Área: " << calcularArea() << endl;
    }
};

int main() {
    double lado1_1, lado2_1;
    cout << "Datos para el primer objeto" << endl;
    cout << "Introducir el primer lado: ";
    cin >> lado1_1;
    cout << "Introducir el segundo lado: ";
    cin >> lado2_1;

    double lado1_2, lado2_2;
    cout << "Datos para el segundo objeto" << endl;
    cout << "Introducir el primer lado: ";
    cin >> lado1_2;
    cout << "Introducir el segundo lado: ";
    cin >> lado2_2;

    TrianguloRectangulo triangulo1(lado1_1, lado2_1);
    TrianguloRectangulo triangulo2(lado1_2, lado2_2);

    cout << "Información del primer triángulo:" << endl;
    triangulo1.mostrarInformacion();
    cout << "--------------------------------------" << endl;
    cout << "Información del segundo triángulo:" << endl;
    triangulo2.mostrarInformacion();

    return 0;
}
