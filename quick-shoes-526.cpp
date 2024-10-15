#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(double a, double b, double c) {
    double discriminante = b * b - 4 * a * c;
    if (discriminante >= 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las raíces son: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else {
        cout << "La ecuación no tiene raíces reales." << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Introduce el valor de A: ";
    cin >> a;
    cout << "Introduce el valor de B: ";
    cin >> b;
    cout << "Introduce el valor de C: ";
    cin >> c;

    calcularRaices(a, b, c);
    return 0;
}
