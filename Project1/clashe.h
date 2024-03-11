//trabajo practico de laboratorio de sis avanzada 
#include<iostream>
#include<cmath>
using namespace std;
class trianguloRec {
private:
	double la1;
	double la2;
	double hip;
public:
	trianguloRec(double l1, double l2) : la1(l1), la2(l2) {
		hip = sqrt(pow(la1, 2) + pow(la2, 2));
	}
	double CalArea() const {
		return (la1 * la2) / 2;
	}
	void mostrar() const {
		cout << "la1:" << la1 << endl;
		cout << "la2:" << la2 << endl;
		cout << "hip:" << hip << endl;
		cout << "El area es:" << CalArea() << endl;
	}
};
int main() {
	double la1_1, la2_1;
	cout << "Datos para el primer objeto" << endl;
	cout << "introducir el primer lado" << endl;
	cin >> la1_1;
	cout << "Introducir el segundo lado" << endl;
	cin >> la2_1;
	double la1_2, la2_2;
	cout << "datos para el segundo objeto" << endl;
	cout << "introducir el primer lado" << endl;
	cin >> la1_2;
	cout << "introducir el segundo lado" << endl;
	cin >> la2_2;

	trianguloRec triangulo(la1_1, la2_1);
	trianguloRec triangulo1(la1_2, la2_2);

	triangulo.mostrar();
	triangulo1.mostrar();

	return 0;
}


