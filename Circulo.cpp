#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double radio, area, perimetro;

    
    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    // Calcular el �rea y el per�metro
    area = M_PI * pow(radio, 2); // F�rmula: p * r^2
    perimetro = 2 * M_PI * radio; // F�rmula: 2 * p * r

    cout << "El area del circulo es: " << area << endl;
    cout << "El perimetro del circulo es: " << perimetro << endl;

    return 0;
}

